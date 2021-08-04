# FNKKeepAlive

参考别人的思路:

进入后台模式调用start方法,返回前台调用stop方法
通过不断 播放一次无声音乐+申请BackgroundTask达到后台保活的效果(相对省电)

使用
```
 [FNKKeepAliveManager addObserver:[UIApplication sharedApplication].delegate];

```
