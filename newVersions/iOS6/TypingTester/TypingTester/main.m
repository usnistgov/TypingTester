//
//  main.m
//  TypingTester
//
//  Created by Matthew Kerr on 7/31/13.
//  Copyright (c) 2013 Matthew Kerr. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ttAppDelegate.h"
#import "ttApplication.h"

int main(int argc, char *argv[])
{
    @autoreleasepool
    {
        //return UIApplicationMain(argc, argv, nil, NSStringFromClass([ttAppDelegate class]));
         return UIApplicationMain(argc, argv, NSStringFromClass([ttApplication class]), NSStringFromClass([ttAppDelegate class]));
    }
}
