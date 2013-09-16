//
//  ttEventTouch.m
//  TypingTester
//
//  Created by Matthew Kerr on 8/15/13.
//  Copyright (c) 2013 Matthew Kerr. All rights reserved.
//

#import "ttEventTouch.h"

@implementation ttEventTouch


-(id) initWithPoint:(CGPoint)point
{
    return [self initWithPoint:point andPhase:UnknownPhase andSubPhase:UnknownSubPhase andTime:[NSDate date]];
}

-(id) initWithPoint:(CGPoint)point andPhase:(Phase)phase
{
    return [self initWithPoint:point andPhase:phase andSubPhase:UnknownSubPhase andTime:[NSDate date]];
}

-(id) initWithPoint:(CGPoint)point andPhase:(Phase)phase andSubPhase:(SubPhase)subPhase
{
    return [self initWithPoint:point andPhase:phase andSubPhase:subPhase andTime:[NSDate date]];
}

-(id) initWithPoint:(CGPoint)point andPhase:(Phase)phase andSubPhase:(SubPhase)subPhase andTime:(NSDate*)time
{
    self = [super initWithEventType:Touch andPhase:phase andSubPhase:subPhase andTime:time];
    if (self)
    {
        self.point = point;
    }
    return self;
}

-(NSString*)description
{
    NSString *eventType = ttcEventTypeStringArray[self.event];
    NSString *phase = ttcPhaseStringArray[self.phase];
    NSString *subphase = ttcSubPhaseStringArray[self.subPhase];
    return [NSString stringWithFormat:@"%@\t%f\t%@\t%@\t%@\t%@\t%@\t%f\t%f\t-1\t-1\t\t%@", self.time, self.interval/1000, self.participantNumber, eventType,
            phase, subphase, self.targetString, self.point.x, self.point.y, self.notes];
}

@end
