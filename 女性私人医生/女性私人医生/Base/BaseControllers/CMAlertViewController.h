//
//  CMAlertViewController.h
//  两性私人医生
//
//  Created by Tim on 13-1-23.
//  Copyright (c) 2013年 Tim. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CMAlertViewControllerDelegate <NSObject>

@optional
- (void)confirmBtnClickForDelegate;

@end

@interface CMAlertViewController : UIViewController

@property (nonatomic, strong) NSString *msgTitle;
@property (nonatomic, strong) NSString *msgContent;

@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UILabel *messageLabel;

@property (nonatomic, strong) id<CMAlertViewControllerDelegate> delegate;

- (IBAction)confirmBtnClicked:(id)sender;

@end
