//
//  RegisterViewController.h
//  SeriesTime
//
//  Created by Jessica Cavazos on 10/21/14.
//  Copyright (c) 2014 JessicaCavazos. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface RegisterViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *txtNewUser;
@property (strong, nonatomic) IBOutlet UITextField *txtNewPsw;
@property (strong, nonatomic) IBOutlet UITextField *txtEmail;
- (IBAction)Register:(id)sender;

@end
