//
//  MenuTableCellTableViewCell.h
//  Test
//
//  Created by Administrator on 29/02/16.
//  Copyright © 2016 Ajit Narayanan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MenuTableViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *prepTime;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnail;

@end

