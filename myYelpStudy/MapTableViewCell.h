//
//  MapTableViewCell.h
//  myYelpStudy
//
//  Created by 吴天宇 on 2017/6/8.
//  Copyright © 2017年 wty. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "YelpDataModel.h"
#import "YelpAnnotation.h"

@interface MapTableViewCell : UITableViewCell

- (void)upBasedOnDataModel:(YelpDataModel *)dataModel;

@end
