//
//  Invoker.h
//  DesignPatternsPractices
//
//  Created by su xinde on 14-9-6.
//  Copyright (c) 2014年 Su XinDe. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Command.h"

@interface Invoker : NSObject
{
@package
    Command *mCommand;
    
}

- (void)setCommand:(Command *)command;
- (void)executeCommand;

@end