//
//  iCalculator.h
//  iCalculator
//
//  Created by ck on 14/10/2010.
//  Copyright 2010 javacom. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface iCalculator : NSObject {
	@private
	NSMutableString *_display;
	double			_operand;
	NSString		*_operator;

}

-(id) init;
-(void) dealloc;
-(void) input: (NSString *) character;
-(NSString *) displayValue;
@end
