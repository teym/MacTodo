//
//  ObjCenter.h
//  Core
//
//  Created by teym on 13-9-5.
//  Copyright (c) 2013年 teym. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AsyncData.h"
@interface ObjCenter : NSData
-(void) addAsyncObj:(AsyncData*) obj;
-(void) removeDataObj:(AsyncData*) obj;
-(NSArray*) allTags;
-(NSArray*) objsForTag:(NSString *) tag;
@end
