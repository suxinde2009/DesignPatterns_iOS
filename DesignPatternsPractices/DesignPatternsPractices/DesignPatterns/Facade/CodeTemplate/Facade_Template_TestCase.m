//
//  Facade_Template_TestCase.m
//  DesignPatternsPractices
//
//  Created by su xinde on 14-9-7.
//  Copyright (c) 2014年 Su XinDe. All rights reserved.
//

#import "Facade_Template_TestCase.h"

@implementation Facade_Template_TestCase

+ (void)mainTest
{
    Facade *facade = [[Facade alloc] init];
    [facade methodA];
    [facade methodB];
}

@end