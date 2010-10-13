//
//  iCalcAppDelegate.m
//  iCalc
//
//  Created by javacom on 14/10/2010.
//  Copyright javacom 2010. All rights reserved.
//

#import "iCalcAppDelegate.h"
#import "iCalcViewController.h"

@implementation iCalcAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
