//
//  ViewController.h
//  Lesson9
//
//  Created by Azat Almeev on 29.10.15.
//  Copyright © 2015 Azat Almeev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *Y;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *X;
@property (strong, nonatomic) IBOutlet UILabel *score;
@property (strong, nonatomic) IBOutlet UILabel *clicks;
@property (nonatomic) NSInteger *check;


@end

