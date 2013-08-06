//
//  AViewController.m
//  Pretty Dates
//
//  Created by Steven Huey on 8/5/13.
//  Copyright (c) 2013 Art & Logic. All rights reserved.
//

#import "AViewController.h"

#import "NSDate+PrettyTimestamp.h"

@interface AViewController ()
/**
 *	Update the timestamp label using jonhocking/PrettyTimestamp
 */
- (void)updateTimestamp;
@end

@implementation AViewController

- (void)viewDidLoad
{
   [super viewDidLoad];
   
   // Disallow dates in the future
   self.datePicker.maximumDate = [NSDate date];
   
   // Reflect today's today in the relative timestamp
   [self updateTimestamp];
}

- (IBAction)dateChanged:(id)sender
{
   [self updateTimestamp];
}

- (IBAction)today:(id)sender
{
   self.datePicker.date = [NSDate date];
   [self updateTimestamp];
}

- (IBAction)dateAndTime:(id)sender
{
   if (self.modeSwitch.on)
   {
      self.datePicker.datePickerMode = UIDatePickerModeDateAndTime;
   }
   else
   {
      self.datePicker.datePickerMode = UIDatePickerModeDate;
   }
}

- (void)updateTimestamp
{
   self.timestampLabel.text = [self.datePicker.date prettyTimestampSinceNow];
}

@end
