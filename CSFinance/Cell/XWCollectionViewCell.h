//
//  XWCollectionViewCell.h
//  XWScrollBanner
//
//  Created by vivi wu on 2018/4/23.
//  Copyright © 2018年 vivi wu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XWCollectionViewCell : UICollectionViewCell
//@property(nonatomic, strong)UILabel * label;
//@property(nonatomic, strong)UILabel * detailLabel;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *rightLabel;
@property (weak, nonatomic) IBOutlet UILabel *leftLabel;

- (void)refreshWithLayoutModel:(id)model;

@end
