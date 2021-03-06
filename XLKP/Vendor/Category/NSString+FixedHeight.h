//
//  NSString+FixedHeight.h
//  XLKP
//
//  Created by Facebook on 2017/11/24.
//  Copyright © 2017年 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (FixedHeight)

/**
 *  根据一定宽度和字体计算高度
 *
 *  @param maxWidth 最大宽度
 *  @param font  字体
 *
 *  @return 返回计算好高度的size
 */
- (CGSize)stringHeightWithMaxWidth:(CGFloat)maxWidth andFont:(UIFont*)font ;


/**
 *  根据一定高度和字体计算宽度
 *
 *  @param maxHeight 最大高度
 *  @param font      字体
 *
 *  @return 返回计算宽度的size
 */
- (CGSize)stringWidthWithMaxHeight:(CGFloat)maxHeight andFont:(UIFont*)font;

@end
