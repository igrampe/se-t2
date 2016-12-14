//
//  SERootRouter.h
//  skyeng-test-2
//
//  Created by Semyon Belokovsky on 11/12/2016.
//  Copyright © 2016 igrampe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <APLViperStack/TransitionHandler/APLTransitionHandler.h>
#import "SERootRouterInput.h"

@class SESignInAssembly;

@interface SERootRouter : NSObject <SERootRouterInput>

@property (nonatomic, weak) id<APLTransitionHandler> transitionHandler;

@property (nonatomic, strong) SESignInAssembly *signInAssembly;

@end