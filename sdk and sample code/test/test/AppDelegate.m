//
//  AppDelegate.m
//  test
//
//  Created by Arceus Jia on 13-12-4.
//  Copyright (c) 2013年 icsoft. All rights reserved.
//

#import "AppDelegate.h"
#import "deskapptrack.h"

#define KEY @"6C89379349C75A37DA1CAE86093EC01E"
@implementation AppDelegate

- (void)dealloc
{
    [super dealloc];
}

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    // Insert code here to initialize your application
    [deskapptrack startWithAppkey:KEY];
}

@end
