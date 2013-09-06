//
//  AsyncData.m
//  Core
//
//  Created by teym on 13-9-5.
//  Copyright (c) 2013年 teym. All rights reserved.
//

#import "AsyncData.h"

@implementation AsyncData
-(BOOL) mearge:(id)data{
    NSAssert([data isKindOfClass:[AsyncData class]], @"data type error");
    if(![data isKindOfClass:[AsyncData class]]) return NO;
    AsyncData * other = data;
    NSAssert((self.iden?[self.iden isEqualToString:other.iden]:YES), @"iden error");
    if(!self.iden){
        self.iden = other.iden;
    }else{
        NSAssert(NO, @"iden error");
        return NO;
    }
    NSAssert([self respondsToSelector:@selector(meargeFromOther:)], @"self AsyncMearge no implementation");
    BOOL mearge = [(id<AsyncMearge>)self meargeFromOther:other];
    
    if(![self.tags isEqual:other.tags]){
        if(self.bChanged)
            self.tags = [self.tags setByAddingObjectsFromSet:other.tags];
        else
            self.tags = other.tags;
        mearge = YES;
    }
    self.bMeared = mearge;
    self.baseVersion = other.version;
    self.version = other.version;
    return YES;
}
@end
