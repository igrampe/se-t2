//
//  SEAppTheme.m
//  skyeng-test-2
//
//  Created by Semyon Belokovsky on 15/12/2016.
//  Copyright © 2016 igrampe. All rights reserved.
//

#import "SEAppTheme.h"
#import "UIColor+APL.h"

@implementation SEAppTheme

+ (instancetype)sharedObject {
    static id _sharedInstance = nil;
    static dispatch_once_t oncePredicate;
    dispatch_once(&oncePredicate, ^{
        _sharedInstance = [[self alloc] init];
    });
    return _sharedInstance;
}

#pragma mark - Font

- (UIFont *)primaryFontWithSize:(CGFloat)size {
    return [UIFont fontWithName:@"OpenSans-Light" size:size];
}

- (UIFont *)secondaryFontWithSize:(CGFloat)size {
    return [UIFont fontWithName:@"OpenSans" size:size];
}

#pragma mark - Color

- (UIColor *)colorMainBackground {
    return UIColorWithHex(@"F0F0F0");
}

- (UIColor *)colorText {
    return UIColorWithHex(@"333333");
}

- (UIColor *)colorHint {
    return UIColorWithHex(@"999999");
}

#pragma mark -- Button

- (UIColor *)colorButtonPrimaryBackground {
    return UIColorWithHex(@"5D9CEC");
}

- (UIColor *)colorButtonPrimaryTitle {
    return [UIColor whiteColor];
}

- (UIColor *)colorButtonSecondaryBorder {
    return UIColorWithHex(@"CCCCCC");
}

- (UIColor *)colorButtonSecondaryTitle {
    return UIColorWithHex(@"333333");
}

#pragma mark -- TextField

- (UIColor *)colorTextFieldBackground {
    return [UIColor whiteColor];
}

- (UIColor *)colorTextFieldTitle {
    return UIColorWithHex(@"333333");
}

@end
