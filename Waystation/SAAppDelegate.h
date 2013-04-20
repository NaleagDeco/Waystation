//
//  SAAppDelegate.h
//  Waystation
//
//  Created by Tim Capes on 2013-04-19.
//  Copyright (c) 2013 SpaceApps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DDMenuController.h"
@class SAViewController;

@interface SAAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) DDMenuController *menuController;
@property (strong, nonatomic) SAViewController *viewController;

@end
