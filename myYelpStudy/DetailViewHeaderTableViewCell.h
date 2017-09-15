//
//  DetailViewHeaderTableViewCell.h
//  myYelpStudy
//
//  Created by 吴天宇 on 2017/6/3.
//  Copyright © 2017年 wty. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface DetailViewHeaderTableViewCell : UITableViewCell

- (void)upBasedOnDataModel:(YelpDataModel *)dataModel;

@end
