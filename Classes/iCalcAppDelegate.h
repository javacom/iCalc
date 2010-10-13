//
//  iCalcAppDelegate.h
//  iCalc
//
//  Created by ck on 14/10/2010.
//  Copyright javacom 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class iCalcViewController;

@interface iCalcAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    iCalcViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet iCalcViewController *viewController;

@end

