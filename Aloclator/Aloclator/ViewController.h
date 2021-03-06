//
//  ViewController.h
//  Aloclator
//
//  Created by Matt Krueger on 6/13/15.
//  Copyright (c) 2015 Matt Krueger. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;

- (void)buttonPressed:(UIButton *)sender;


@end

