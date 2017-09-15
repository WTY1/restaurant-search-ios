//
//  YelpTableViewCell.h
//  myYelpStudy
//
//  Created by 吴天宇 on 2017/5/28.
//  Copyright © 2017年 wty. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface YelpTableViewCell : UITableViewCell

- (void)upBasedOnDataModel:(YelpDataModel *)dataModel;

@end
