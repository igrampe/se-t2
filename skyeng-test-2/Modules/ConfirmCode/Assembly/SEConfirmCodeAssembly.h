//
//	SEConfirmCodeAssembly.h
//  ConfirmCode
//  skyeng-test-2
//
//  Created by Semyon Belokovsky on 14/12/2016.
//  Copyright © 2016 igrampe. All rights reserved.
//


#import <Typhoon/Typhoon.h>

@class SEServicesAssembly;

@interface SEConfirmCodeAssembly : TyphoonAssembly

@property (nonatomic, readonly) SEServicesAssembly *servicesAssembly;

- (UIViewController *)viewConfirmCode;

@end
