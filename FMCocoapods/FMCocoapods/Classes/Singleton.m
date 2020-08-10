//
//  Singleton.m
//  worldUnionLoan
//
//  Created by admin on 2018/3/15.
//  Copyright © 2018年 lishaohua. All rights reserved.
//

#import "Singleton.h"

@implementation Singleton
static id _instance = nil;
+(instancetype)shareSingleton
{
    return [[self alloc]init];
}
+(instancetype)allocWithZone:(struct _NSZone *)zone
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _instance=[super allocWithZone:zone];
    });
    return _instance;
}
-(instancetype)init
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _instance=[super init];
        
    });
    return _instance;
}

- (id)copyWithZone:(NSZone *)zone{
    return  _instance;
}
+ (id)copyWithZone:(struct _NSZone *)zone{
    return  _instance;
}
+ (id)mutableCopyWithZone:(struct _NSZone *)zone{
    return _instance;
}
- (id)mutableCopyWithZone:(NSZone *)zone{
    return _instance;
}
@end
