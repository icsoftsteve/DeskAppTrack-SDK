//
//  WudiClick.h
//  WudiClick
//
//  Created by Arceus Jia on 13-11-30.
//  Copyright (c) 2013年 icsoft. All rights reserved.
//

/*
 You should add these frameworks to your product:
 SystemConfiguration.framework, libtidy.dylib, libz.dylib.
 
 If you want to use this SDK in App Sandbox. You should check the option Allow Outgoing Connections.
 */

#import <Foundation/Foundation.h>

@interface deskapptrack : NSObject

/*
 Add this methods to applicationDidFinishLaunching in AppDelegate.m
 You should regist your product in http://deskapptrack.com ,then you can get a unique appKey.
 */
+ (void) startWithAppkey: (NSString *)appKey;

/*
 Add this methods to applicationShouldTerminateAfterLastWindowClosed in AppDelegate.m
 */
+ (void) terminateApp;


+ (void) logEvent: (NSString *)event;
+ (void) logEvent:(NSString *)event withOption :(NSString *)option withType: (NSString *)type;

@end
