//
//  CMBaseTabBarController.h
//  两性私人医生
//
//  Created by Tim on 13-1-11.
//  Copyright (c) 2013年 Tim. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CMBaseTabBarController : UITabBarController

{
    UIActivityIndicatorView *activityIndicator;
    UIImage *navBarBgImage;
}

@property (nonatomic, strong) UIButton *unreadMsgBtn;

- (IBAction)back:(id)sender;
- (IBAction)openUnreadMsg:(id)sender;

@end
