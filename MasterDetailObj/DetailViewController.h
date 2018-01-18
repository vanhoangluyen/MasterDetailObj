//
//  DetailViewController.h
//  MasterDetailObj
//
//  Created by LuyenBG on 1/18/18.
//  Copyright © 2018 LuyenBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

