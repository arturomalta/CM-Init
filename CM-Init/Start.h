//
//  ViewController.h
//  CM-Init
//
//  Created by Walter Gonzalez Domenzain on 23/05/15.
//  Copyright (c) 2015 Smartplace. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Start : UIViewController

//Buttons
@property (strong, nonatomic) IBOutlet UIButton *btnChange;

//Labels
@property (strong, nonatomic) IBOutlet UILabel *lblWelcome;


//Actions
- (IBAction)btnChangePressed:(id)sender;


@end

