//
//  ViewController.h
//  UIButton Indicator
//
//  Copyright (c) 2015 Jeremiah Poisson
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *startButton;
@property (weak, nonatomic) IBOutlet UIButton *stopButton;

- (IBAction)start:(id)sender;
- (IBAction)stop:(id)sender;


@end

