//
//  FNKKeepAliveManager.h
//  FNKKeepAliveKit
//
//  Created by LWW on 2021/8/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FNKKeepAliveManager : NSObject

/**
 使用
 [FNKKeepAliveManager addObserver:[UIApplication sharedApplication].delegate];
 */
/***  注册监听 */

+ (void)addObserver:(id)appDelegateClass;
@end

NS_ASSUME_NONNULL_END
