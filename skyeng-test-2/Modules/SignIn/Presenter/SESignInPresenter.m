//
//	SESignInPresenter.m
//  SignIn
//  skyeng-test-2
//
//  Created by Semyon Belokovsky on 12/12/2016.
//  Copyright © 2016 igrampe. All rights reserved.
//


#import "SESignInPresenter.h"
#import "SESignInViewOutput.h"
#import "SESignInInteractorOutput.h"
#import "SESignInModuleInput.h"
#import "SESignInModuleOutput.h"

#import "NSString+EmailValidate.h"

@interface SESignInPresenter () <SESignInViewOutput, SESignInInteractorOutput, SESignInModuleInput>

@end

@implementation SESignInPresenter

@synthesize moduleOutput;

#pragma mark - SESignInViewOutput

- (void)viewIsReady {
    [self.view setEmailFieldEnabled:NO];
}

- (void)eventEmailFieldTextDidChange:(NSString *)text {
    [self.view setEmailFieldEnabled:(text && [text isValidEmail])];
}

@end
