//
//  XTNetwork.h
//  XTWeibo
//
//  Created by zjwang on 16/9/13.
//  Copyright © 2016年 夏天然后. All rights reserved.
//

#import <Foundation/Foundation.h>
// 进行一个简单网络请求封装
typedef NS_ENUM(NSInteger, MethodsType) {
    POST     = 0,
    GET      = 1,
};
@interface XTNetwork : NSObject
+ (void)XTNetworkRequestWithURL:(NSString *)url
                      parameter:(NSDictionary *)parameter
                        methods:(MethodsType)methods
                  successResult:(void (^)(id result))successBlock
                     failResult:(void (^)(id error))failBlock;
@end
