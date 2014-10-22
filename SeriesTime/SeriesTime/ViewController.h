//
//  ViewController.h
//  SeriesTime
//
//  Created by Jessica Cavazos on 10/21/14.
//  Copyright (c) 2014 JessicaCavazos. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *txtUsername;
@property (strong, nonatomic) IBOutlet UITextField *txtPsw;
- (IBAction)Login:(id)sender;
- (IBAction)Register:(id)sender;


@end

