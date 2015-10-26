//
//  BBBadgeBarButtonItem.h
//
//  Created by Tanguy Aladenise on 07/02/14.
//  Copyright (c) 2014 Riverie, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface BBBadgeBarButtonItem : UIBarButtonItem

// Each time you change one of the properties, the badge will refresh with your changes

// Badge value to be display
@property (nonatomic) IBInspectable NSString *badgeValue;
// Badge background color
@property (nonatomic) IBInspectable UIColor *badgeBGColor;
// Badge text color
@property (nonatomic) IBInspectable UIColor *badgeTextColor;
// Badge font
@property (nonatomic) IBInspectable UIFont *badgeFont;
// Padding value for the badge
@property (nonatomic) IBInspectable CGFloat badgePadding;
// Minimum size badge to small
@property (nonatomic) IBInspectable CGFloat badgeMinSize;
// Values for offseting the badge over the BarButtonItem you picked
@property (nonatomic) IBInspectable CGFloat badgeOriginX;
@property (nonatomic) IBInspectable CGFloat badgeOriginY;
// In case of numbers, remove the badge when reaching zero
@property IBInspectable BOOL shouldHideBadgeAtZero;
// Badge has a bounce animation when value changes
@property IBInspectable BOOL shouldAnimateBadge;

- (BBBadgeBarButtonItem *)initWithCustomUIButton:(UIButton *)customButton;

@end