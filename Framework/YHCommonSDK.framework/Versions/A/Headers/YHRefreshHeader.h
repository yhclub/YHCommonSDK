//
//  YHRefreshHeader.h
//  YHHospitalAssitan
//
//  Created by zxl on 2017/9/19.
//  Copyright © 2017年 YH. All rights reserved.
//

#import "YHLoadingView.h"

#import <MJRefresh/MJRefresh.h>

@interface YHRefreshHeader : MJRefreshStateHeader

@property(nonatomic,strong)UIView *bgView;
@property(nonatomic,strong)UIImageView *pullImageView;

@property(nonatomic,strong)YHLoadingView *yhloadingView;

@property(nonatomic,assign)BOOL canFeedBack;
@end