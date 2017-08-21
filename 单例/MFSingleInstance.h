//
//  MFSingleInstance.h
//  单例
//
//  Created by MF on 2017/8/21.
//  Copyright © 2017年 MF. All rights reserved.
//



// 定义头文件 类方法
#define MFSingleH(name) +(instancetype)default##name;

// 定义实现文件 

#if __has_feature(objc_arc)
// ARC
#define MFSingleM(name) static id _instance;\
+(instancetype)allocWithZone:(struct _NSZone *)zone{\
    static dispatch_once_t onceToken;\
    dispatch_once(&onceToken, ^{\
        _instance = [super allocWithZone:zone];\
    });\
    \
    return _instance;\
}\
\
+(instancetype)default##name{\
    return [[self alloc]init];\
}\
\
-(id)copyWithZone:(NSZone *)zone{\
    return _instance;\
}\
-(id)mutableCopyWithZone:(NSZone *)zone{\
    return _instance;\
}

#else
#define MFSingleM(name) static id _instance;\
+(instancetype)allocWithZone:(struct _NSZone *)zone{\
    static dispatch_once_t onceToken;\
    dispatch_once(&onceToken, ^{\
        _instance = [super allocWithZone:zone];\
    });\
    \
    return _instance;\
}\
\
+(instancetype)default##name{\
    return [[self alloc]init];\
}\
\
-(id)copyWithZone:(NSZone *)zone{\
    return _instance;\
}\
-(id)mutableCopyWithZone:(NSZone *)zone{\
    return _instance;\
}\
\
-(oneway void)release {\
    \
}\
-(instancetype)retain{\
    return _instance;\
}\
-(NSUInteger)retainCount{\
    return MAXFLOAT;\
}\

#endif
