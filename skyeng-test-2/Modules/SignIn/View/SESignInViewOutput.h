//
//	SESignInViewOutput.h
//  SignIn
//  skyeng-test-2
//
//  Created by Semyon Belokovsky on 12/12/2016.
//  Copyright © 2016 igrampe. All rights reserved.
//


#import <Foundation/Foundation.h>

@protocol SESignInViewOutput <NSObject>

- (void)viewIsReady;
- (void)eventEmailFieldTextDidChange:(NSString *)text;

- (void)actionCode;
- (void)actionPassword;

@end
