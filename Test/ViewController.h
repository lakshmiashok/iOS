//
//  ViewController.h
//  Test
//
//  Created by Administrator on 29/02/16.
//  Copyright © 2016 Ajit Narayanan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *tableData;
    NSMutableArray *thumbnailImages;
    NSMutableArray *prep;
}

@end



