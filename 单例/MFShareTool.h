//
//  MFShareTool.h
//  单例
//
//  Created by htkg on 2017/8/21.
//  Copyright © 2017年 MF. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MFSingleInstance.h"

@interface MFShareTool : NSObject<NSCopying,NSMutableCopying>

MFSingleH(ShareTool)

@end
