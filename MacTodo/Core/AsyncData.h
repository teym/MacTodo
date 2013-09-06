//
//  AsyncData.h
//  Core
//
//  Created by teym on 13-9-5.
//  Copyright (c) 2013年 teym. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AsyncMearge <NSObject>
-(BOOL) meargeFromOther:(id) other;
@end

@interface AsyncData : NSObject
@property (nonatomic,strong) NSString * iden;
@property (nonatomic,strong) NSString * localIden;
@property (nonatomic) BOOL bMeared;
@property (nonatomic) BOOL bChanged;
@property (nonatomic) NSUInteger baseVersion;
@property (nonatomic) NSUInteger version;
@property (nonatomic,strong) NSSet * tags;
-(BOOL) mearge:(id) data;
@end