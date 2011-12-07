//
//  ComputerVisionAppDelegate.h
//  ComputerVision
//
//  Created by ys on 11-3-18.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ComputerVisionViewController;

@interface ComputerVisionAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet ComputerVisionViewController *viewController;

@end
