//
//  UDMainViewController.h
//  UDStackView
//
//  Created by Rolandas Razma on 8/21/11.
//  Copyright (c) 2011 UD7. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UDStackNavigationController.h"


@interface UDMainViewController : UIViewController <UDStackNavigationControllerDelegate>

- (IBAction)presentStackViewFromButton:(UIButton *)button;

@end
