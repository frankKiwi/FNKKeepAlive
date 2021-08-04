//
//  FNKDeepSleepPreventerPlus.h
//  PlaySilentMusicInBackgroundMode
//
//  Created by LWW on 2020/1/22.
//  Copyright © 2020 LWW. All rights reserved.
//  进入后台模式调用start方法,返回前台调用stop方法
//  通过不断 播放一次无声音乐+申请BackgroundTask达到后台保活的效果(相对省电)

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FNKDeepSleepPreventerPlus : NSObject
+ (instancetype)sharedInstance;
- (void)start;
- (void)stop;
@end

NS_ASSUME_NONNULL_END
