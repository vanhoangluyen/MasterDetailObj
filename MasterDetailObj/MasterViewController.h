//
//  MasterViewController.h
//  MasterDetailObj
//
//  Created by LuyenBG on 1/18/18.
//  Copyright © 2018 LuyenBG. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

