//
//  SEModuleAssembly.h
//  skyeng-test-2
//
//  Created by Semyon Belokovsky on 12/12/2016.
//  Copyright © 2016 igrampe. All rights reserved.
//

#import <Typhoon/Typhoon.h>
#import "SEServices.h"

@interface SEModuleAssembly : TyphoonAssembly

@property (nonatomic, strong, readonly) TyphoonAssembly <SEServices> *servicesAssembly;

@end
