//
//	SEConfirmCodeViewOutput.h
//  ConfirmCode
//  skyeng-test-2
//
//  Created by Semyon Belokovsky on 14/12/2016.
//  Copyright © 2016 igrampe. All rights reserved.
//


#import <Foundation/Foundation.h>

@protocol SEConfirmCodeViewOutput <NSObject>

- (void)eventViewIsReady;
- (void)eventCodeFieldTextDidChange:(NSString *)text;

- (void)actionSignIn;
- (void)actionRequestCode;

@end
