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

/**
 *	Called by the UIDatePicker when its value changes.
 *
 *	@param	sender	The object that originally sent this message.
 */
- (IBAction)dateChanged:(id)sender;

/**
 *	Set the UIDatePicker instance to today's date.
 *
 *	@param	sender	The object that originally sent this message.
 */
- (IBAction)today:(id)sender;

/**
 *	Switch between the date and date & time modes of the UIDatePicker.
 *
 *	@param	sender	The object that originally sent this message.
 */
- (IBAction)dateAndTime:(id)sender;

@end
