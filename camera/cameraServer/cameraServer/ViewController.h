//
//  ViewController.h
//  cameraServer
//
//  Created by xiaobo on 15/4/4.
//  Copyright (c) 2015年 xiaobo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *ipTextField;
@property (weak, nonatomic) IBOutlet UITextField *portTextField;
@property (weak, nonatomic) IBOutlet UIView *videoView;
- (IBAction)start:(id)sender;

@end

