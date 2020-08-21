//
//  LiuChaoYangNetWork.h
//  NewChuangYan
//
//  Created by lcy on 21.8.20.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LiuChaoYangNetWork : NSObject

// get
+ (void)getNetworkByURL: (NSString *)strURL  AndParameter: (id)parameters success:(void(^)(id responseObject))sucessBlock  failure:(void(^)(NSError *responseObject))failureBlock;


// post
+(void)postNetworkByURL: (NSString *)strURL  AndParameter: (id)parameters success:(void(^)(id responseObject))sucessBlock  failure:(void(^)(NSError *responseObject))failureBlock;
@end

NS_ASSUME_NONNULL_END
