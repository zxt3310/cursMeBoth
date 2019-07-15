//
//  CMMainTabViewController.h
//  两性私人医生
//
//  Created by Tim on 13-1-9.
//  Copyright (c) 2013年 Tim. All rights reserved.
//

#import "ALTabBarView.h"
#import "CMBaseTabBarController.h"
#import <UIKit/UIKit.h>

@interface CMMainTabViewController : CMBaseTabBarController <ALTabBarDelegate>

{
    NSInteger unreadChatCount;
}

@property (nonatomic, retain) IBOutlet ALTabBarView *customTabBarView;

- (void)ntfUnreadMsgCountUpdated:(NSNotification *)note;

- (void)mainthreadUpdateUnreadCount;

@end
