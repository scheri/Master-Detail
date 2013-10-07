//
//  Master_DetailMasterViewController.h
//  Master-Detail
//
//  Created by June Scheri on 10/6/13.
//  Copyright (c) 2013 June Scheri. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Master_DetailMasterViewController : UITableViewController
{
    NSArray *Master;
     NSArray *Detail;
}
@property (strong, nonatomic) NSArray *Master;
@property (strong, nonatomic) NSArray *Detail;
@end
