//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Group6 on 1/18/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (void)emptyStack;;
- (double)performOperation:(NSString *)operation;

@end
