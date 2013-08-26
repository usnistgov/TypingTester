//
//  ttConstants.h
//  TypingTester
//
//  Created by Matthew Kerr on 8/8/13.
//  Copyright (c) 2013 Matthew Kerr. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString *const ttcStringsForTestKey;
FOUNDATION_EXPORT NSString *const ttcEntriesPerTestKey;
FOUNDATION_EXPORT NSString *const ttcForcedPracticeRoundsKey;
FOUNDATION_EXPORT NSString *const ttcShowQuitButtonKey;
FOUNDATION_EXPORT NSString *const ttcShowSkipButtonKey;
FOUNDATION_EXPORT NSString *const ttcRandomStringOrderKey;
FOUNDATION_EXPORT NSString *const ttcRandomStringSelectionKey;
FOUNDATION_EXPORT NSString *const ttcQuitStringKey;
FOUNDATION_EXPORT NSString *const ttcStringOrderSeedKey;
FOUNDATION_EXPORT NSString *const ttcStringSelectionSeedKey;
FOUNDATION_EXPORT NSString *const ttcUseRandomStringOrderSeedKey;
FOUNDATION_EXPORT NSString *const ttcUseRandomStringSelectionSeedKey;
FOUNDATION_EXPORT NSString *const ttcSelectedFiltersKey;
FOUNDATION_EXPORT NSString *const ttcSelectedGroupKey;
FOUNDATION_EXPORT NSString *const ttcFirstRunKey;
FOUNDATION_EXPORT NSString *const ttcEnableHideButtonOnPracticeScreenKey;
FOUNDATION_EXPORT NSString *const ttcProficiencyGroupKey;

FOUNDATION_EXPORT const int ttcStringsForTestDefaultValue;
FOUNDATION_EXPORT const int ttcEntriesPerTestDefaultValue;
FOUNDATION_EXPORT const int ttcForcedPracticeRoundsDefaultValue;
FOUNDATION_EXPORT const int ttcStringOrderSeedDefaultValue;
FOUNDATION_EXPORT const int ttcStringSelectionSeedDefaultValue;
FOUNDATION_EXPORT const int ttcSelectedGroupValue;
FOUNDATION_EXPORT const int ttcProficiencyGroupValue;

FOUNDATION_EXPORT const bool ttcShowQuitButtonDefaultValue;
FOUNDATION_EXPORT const bool ttcShowSkipButtonDefaultValue;
FOUNDATION_EXPORT const bool ttcRandomStringOrderDefaultValue;
FOUNDATION_EXPORT const bool ttcRandomStringSelectionDefaultValue;
FOUNDATION_EXPORT const bool ttcUseRandomStringOrderSeedDefaultValue;
FOUNDATION_EXPORT const bool ttcUseRandomStringSelectionSeedDefaultValue;
FOUNDATION_EXPORT const bool ttcEnableHideButtonOnPracticeScreenValue;

FOUNDATION_EXPORT NSString *const ttcQuitStringDefaultValue;

typedef enum
{
    UnknownEvent = -1,
    Input,
    PhaseBegin,
    PhaseEnd,
    Touch,
    SubPhaseChange,
    ProficiencyStringShown,
    EntityDisplayed,
    ControlActivated
} Event;

typedef enum
{
    UnknownPhase = -1,
    Proficiency,
    Introduction,
    Memorize,
    Entry,
    Recall,
    ThankYou,
} Phase;

typedef enum
{
    UnknownSubPhase = -1,
    FreePractice,
    ForcedPractice,
    Verify,
    EntityChange
}SubPhase;
