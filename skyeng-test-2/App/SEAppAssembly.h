//
//  SEAppAssembly.h
//  skyeng-test-2
//
//  Created by Semyon Belokovsky on 11/12/2016.
//  Copyright © 2016 igrampe. All rights reserved.
//

#import <Typhoon/Typhoon.h>
#import "SERootAssembly.h"

@interface SEAppAssembly : TyphoonAssembly

@property (nonatomic, strong, readonly) SERootAssembly *rootAssembly;

@end
