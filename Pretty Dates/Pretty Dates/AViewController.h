//
//  AViewController.h
//  Pretty Dates
//
//  Created by Steven Huey on 8/5/13.
//  Copyright (c) 2013 Art & Logic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *timestampLabel;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;
@property (weak, nonatomic) IBOutlet UISwitch *modeSwitch;

- (IBAction)dateChanged:(id)sender;
- (IBAction)today:(id)sender;
- (IBAction)dateAndTime:(id)sender;

@end
