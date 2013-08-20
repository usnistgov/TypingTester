//
//  ttInputData.m
//  TypingTester
//
//  Created by Matthew Kerr on 8/19/13.
//  Copyright (c) 2013 Matthew Kerr. All rights reserved.
//

#import "ttInputData.h"
#import "ttUtilities.h"
#import "ttFilter.h"
#import "ttProficiencyItem.h"
#import "ttTestEntity.h"

@implementation ttInputData
{
    NSMutableArray *filterBuilder;
    NSMutableArray *proficiencyBuilder;
    NSMutableArray *entityBuilder;

}

static ttInputData *instance = nil;

+(ttInputData*) Instance
{
    static dispatch_once_t _singletonPredicate;
    
    dispatch_once(&_singletonPredicate, ^{ instance = [[self alloc] init];});
    
    return instance;
}

-(id)init
{
    self = [super init];
    if(self)
    {

    }
    return self;
}

-(void)loadDataFile:(NSString *)filepath
{
    // allocate arrays to use when building the lists
    filterBuilder = [[NSMutableArray alloc]init];
    proficiencyBuilder = [[NSMutableArray alloc]init];
    entityBuilder = [[NSMutableArray alloc]init];
    // build the path to the inputstrings file and load it
    NSString* documentsDirectory = [ttUtilities documentsDirectory];
    NSString *inputFile = [documentsDirectory stringByAppendingPathComponent:@"inputStrings.xml"];
    NSURL *url = [NSURL fileURLWithPath:inputFile];
    NSXMLParser *parser = [[NSXMLParser alloc]initWithContentsOfURL:url];
    parser.delegate = self;
    [parser parse];
    // sort the arrays
    NSSortDescriptor *itemIdDescriptor = [[NSSortDescriptor alloc] initWithKey:@"itemId" ascending:YES];
    NSArray *sortDescriptors = @[itemIdDescriptor];
    self.entities = [entityBuilder sortedArrayUsingDescriptors:sortDescriptors];
    self.proficiencyItems = [proficiencyBuilder sortedArrayUsingDescriptors:sortDescriptors];
    self.filters = [[NSArray alloc]initWithArray:filterBuilder];
    // set the builder arrays to nil
    filterBuilder = nil;
    proficiencyBuilder = nil;
    entityBuilder = nil;
}


-(NSArray*) getPhrasesForGroupId:(int)groupId
{
    NSMutableArray *results = [[NSMutableArray alloc]init];
    for(int i = 0; i < self.proficiencyItems.count; i++)
    {
        ttProficiencyItem *item = [self.proficiencyItems objectAtIndex:i];
        if (item.groupId == groupId)
        {
            [results addObject:item];
        }
    }
    return [[NSArray alloc]initWithArray:results];
}

-(NSArray*) getPhrasesForGroupId:(int)groupId inRandomOrder:(BOOL)random
{
    // return getPhrasesFroGroupId: withSeed:(int)time(null)
    return [self getPhrasesForGroupId:groupId withRandomSeedValue:time(NULL)];
}

-(NSArray*) getPhrasesForGroupId:(int)groupId withRandomSeedValue:(int)seed
{
    NSMutableArray *base = [[NSMutableArray alloc]initWithArray:[self getPhrasesForGroupId:groupId]];
    NSMutableArray *results = [[NSMutableArray alloc]init];
    // seed the random number
    while(base.count > 0)
    {
        unsigned int value = [self randomWithMinValue:0 andMaxValue:base.count];
        [results addObject:[base objectAtIndex:value]];
        [base removeObjectAtIndex:value];
    }
    return [[NSArray alloc]initWithArray:results];
}

/* Would like a semi-open interval [min, max) */
-(unsigned int) randomWithMinValue:(unsigned int)min andMaxValue:(unsigned int) max
{
    int base_random = random(); /* in [0, RAND_MAX] */
    if (RAND_MAX == base_random) return [self randomWithMinValue:min andMaxValue:max];
    /* now guaranteed to be in [0, RAND_MAX) */
    int range       = max - min,
    remainder   = RAND_MAX % range,
    bucket      = RAND_MAX / range;
    /* There are range buckets, plus one smaller interval
     within remainder of RAND_MAX */
    if (base_random < RAND_MAX - remainder)
    {
        return min + base_random/bucket;
    }
    else
    {
        return [self randomWithMinValue:min andMaxValue:max];
    }
}

#pragma -mark ttXmlParserDelegate functions
-(void) finishedChild:(NSString*)s;
{
    self.child = nil;
}

#pragma -mark NSXMLParserDelegate functions
-(void)parser:(NSXMLParser *)parser didStartElement:(NSString *)elementName namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName attributes:(NSDictionary *)attributeDict
{
    if ([elementName isEqualToString:@"filterItem"])
    {
        ttFilter *newFilter = [[ttFilter alloc]init];
        [filterBuilder addObject:newFilter];
        [newFilter parseElementAttributes:attributeDict];
        [newFilter startElementNamed:elementName withParentParser:self];
        self.child = newFilter;
        parser.delegate = newFilter;
    }
    else if ([elementName isEqualToString:@"proficiencyInput"])
    {
        ttProficiencyItem* newItem = [[ttProficiencyItem alloc]init];
        [proficiencyBuilder addObject:newItem];
        [newItem parseElementAttributes:attributeDict];
        [newItem startElementNamed:elementName withParentParser:self];
        self.child = newItem;
        parser.delegate = newItem;
    }
    else if ([elementName isEqualToString:@"memorizationInput"])
    {
        ttTestEntity *newEntity = [[ttTestEntity alloc]init];
        [entityBuilder addObject:newEntity];
        [newEntity parseElementAttributes:attributeDict];
        [newEntity startElementNamed:elementName withParentParser:self];
        self.child = newEntity;
        parser.delegate = newEntity;
    }
}

@end
