//
//  ttInputData.h
//  TypingTester
//
//  Created by Matthew Kerr on 8/19/13.
//  Copyright (c) 2013 Matthew Kerr. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ttXmlParserDelegate.h"

@interface ttInputData : ttXmlParserDelegate

@property (atomic, strong) NSArray *filters;
@property (atomic, strong) NSArray *proficiencyItems;
@property (atomic, strong) NSArray *entities;


+(ttInputData*) Instance;

-(void) loadDataFile:(NSString*)filepath;
-(void) clearData;

-(NSArray*) getPhrasesForGroupId:(int)groupId;
-(NSArray*) getEntities;
@end