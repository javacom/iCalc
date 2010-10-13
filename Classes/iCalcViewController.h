//
//  iCalcViewController.h
//  iCalc
//
//  Created by javacom on 14/10/2010.
//  Copyright javacom 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iCalculator.h"

@interface iCalcViewController : UIViewController {
	IBOutlet id displayField;
	iCalculator *_calculator;
}

-(IBAction) press:(id)sender;

@end

