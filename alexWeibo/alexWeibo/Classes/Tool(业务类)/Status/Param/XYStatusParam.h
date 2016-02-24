//
//  XYStatusParam.h
//  xiayao
//
//  Created by apple on 15-3-10.
//  Copyright (c) 2015年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

// 参数模型如何设计，直接参考接口文档的参数列表
@interface XYStatusParam : NSObject

/**
 *  采用OAuth授权方式为必填参数,访问命令牌
 */
@property (nonatomic, copy) NSString *access_token;

/**
 *  若指定此参数，则返回ID比since_id大的微博（即比since_id时间晚的微博），默认为0。
 */
@property (nonatomic, copy) NSString *since_id;

/**
 *  若指定此参数，则返回ID小于或等于max_id的微博，默认为0。
 */
@property (nonatomic, copy) NSString *max_id;


@end
