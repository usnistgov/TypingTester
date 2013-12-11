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
FOUNDATION_EXPORT NSString *const ttcSkipStringKey;
FOUNDATION_EXPORT NSString *const ttcVerifyRoundsKey;

FOUNDATION_EXPORT const int ttcStringsForTestDefaultValue;
FOUNDATION_EXPORT const int ttcEntriesPerTestDefaultValue;
FOUNDATION_EXPORT const int ttcForcedPracticeRoundsDefaultValue;
FOUNDATION_EXPORT const int ttcStringOrderSeedDefaultValue;
FOUNDATION_EXPORT const int ttcStringSelectionSeedDefaultValue;
FOUNDATION_EXPORT const int ttcSelectedGroupValue;
FOUNDATION_EXPORT const int ttcProficiencyGroupValue;
FOUNDATION_EXPORT const int ttcVerifyRoundsValue;

FOUNDATION_EXPORT const bool ttcShowQuitButtonDefaultValue;
FOUNDATION_EXPORT const bool ttcShowSkipButtonDefaultValue;
FOUNDATION_EXPORT const bool ttcRandomStringOrderDefaultValue;
FOUNDATION_EXPORT const bool ttcRandomStringSelectionDefaultValue;
FOUNDATION_EXPORT const bool ttcUseRandomStringOrderSeedDefaultValue;
FOUNDATION_EXPORT const bool ttcUseRandomStringSelectionSeedDefaultValue;
FOUNDATION_EXPORT const bool ttcEnableHideButtonOnPracticeScreenValue;

FOUNDATION_EXPORT NSString *const ttcQuitStringDefaultValue;
FOUNDATION_EXPORT NSString *const ttcSkipStringDefaultValue;

FOUNDATION_EXPORT const CGRect ttcHitboxShiftKeyIos6Portrait;
FOUNDATION_EXPORT const CGRect ttcHitboxSwitchKeyIos6Portrait;
FOUNDATION_EXPORT const CGRect ttcHitboxShiftKeyIos6Landscape;
FOUNDATION_EXPORT const CGRect ttcHitboxSwitchKeyIos6Landscape;
FOUNDATION_EXPORT const CGRect ttcHitboxShiftKeyIos7Portrait;
FOUNDATION_EXPORT const CGRect ttcHitboxSwitchKeyIos7Portrait;
FOUNDATION_EXPORT const CGRect ttcHitboxShiftKeyIos7Landscape;
FOUNDATION_EXPORT const CGRect ttcHitboxSwitchKeyIos7Landscape;

FOUNDATION_EXPORT const CGRect ttcHitboxShiftKeyIos6Portrait_iPad;
FOUNDATION_EXPORT const CGRect ttcHitboxShiftKey2Ios6Portrait_iPad;
FOUNDATION_EXPORT const CGRect ttcHitboxSwitchKeyIos6Portrait_iPad;
FOUNDATION_EXPORT const CGRect ttcHitboxSwitchKey2Ios6Portrait_iPad;
FOUNDATION_EXPORT const CGRect ttcHitboxShiftKeyIos6Landscape_iPad;
FOUNDATION_EXPORT const CGRect ttcHitboxShiftKey2Ios6Landscape_iPad;
FOUNDATION_EXPORT const CGRect ttcHitboxSwitchKeyIos6Landscape_iPad;
FOUNDATION_EXPORT const CGRect ttcHitboxSwitchKey2Ios6Landscape_iPad;
FOUNDATION_EXPORT const CGRect ttcHitboxShiftKeyIos7Portrait_iPad;
FOUNDATION_EXPORT const CGRect ttcHitboxShiftKey2Ios7Portrait_iPad;
FOUNDATION_EXPORT const CGRect ttcHitboxSwitchKeyIos7Portrait_iPad;
FOUNDATION_EXPORT const CGRect ttcHitboxSwitchKey2Ios7Portrait_iPad;
FOUNDATION_EXPORT const CGRect ttcHitboxShiftKeyIos7Landscape_iPad;
FOUNDATION_EXPORT const CGRect ttcHitboxShiftKey2Ios7Landscape_iPad;
FOUNDATION_EXPORT const CGRect ttcHitboxSwitchKeyIos7Landscape_iPad;
FOUNDATION_EXPORT const CGRect ttcHitboxSwitchKey2Ios7Landscape_iPad;

FOUNDATION_EXPORT const CGRect ttcHitBoxNull;

FOUNDATION_EXPORT NSString *const ttcPhaseStringArray[];
FOUNDATION_EXPORT NSString *const ttcSubPhaseStringArray[];
FOUNDATION_EXPORT NSString *const ttcEventTypeStringArray[];
FOUNDATION_EXPORT NSString *const ttcSpecialKeyStringArray[];
FOUNDATION_EXPORT NSString *const ttcKeyboardModeStringArray[];

typedef enum
{
    UnknownEvent,
    Input,
    PhaseBegin,
    PhaseEnd,
    Touch,
    SubPhaseChange,
    ProficiencyStringShown,
    EntityDisplayed,
    ControlActivated,
    SpecialKeyPressed,
    OrientationChange,
    KeyboardShown,
    KeyboardHidden,
    KeyboardTouch,
    IncorrectValueEntered,
    CorrectValueEntered
} Event;

typedef enum
{
    UnknownPhase,
    Proficiency,
    Introduction,
    Memorize,
    Entry,
    Recall,
    ThankYou
} Phase;

typedef enum
{
    UnknownSubPhase,
    FreePractice,
    ForcedPractice,
    Verify,
    EntityChange,
    NoSubPhase
}SubPhase;

typedef enum
{
    SpecialKeyUnknown,
    SpecialKeyShift,
    SpecialKeyShiftRight,
    SpecialKeyKeyboardChange,
    SpecialKeyKeyboardChangeRight,
    SpecialKeyReturn,
    SpecialKeyHideKeyboard,
    SpecialKeyDelete
} SpecialKey;

typedef enum
{
    Alphabetic,
    Numeric,
    Symbol,
    UnknownMode
} KeyboardMode;
