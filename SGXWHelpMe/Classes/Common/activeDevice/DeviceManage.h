//
//  DeviceManage.h
//  Need
//
//  Created by Cheng Jimmy on 15-1-4.
//  Copyright (c) 2015年 weplanter. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,NeediPhoneSize){
    iPhoneSize3_5   = 1,
    iPhoneSize4_0   = 2,
    iPhoneSize4_7   = 3,
    iPhoneSize5_5   = 4
};

@interface DeviceManage : NSObject
@property (nonatomic, strong) NSString *osVersion;          //系统版本  eg.@"8.1"
@property (nonatomic, strong) NSString *mac;                //设备UUID
@property (nonatomic, strong) NSString *source;             //设备来源  eg.@"ANDROID",@"IOS"
@property (nonatomic, strong) NSString *deviceType;         //设备类型  eg. @"iPhone"
@property (nonatomic, assign) NeediPhoneSize iPhoneSize;    //设备机型  eg. iPhone4/4s,iPhone5/5c/5s,iPhone6,iPhone6plus
@property (nonatomic, strong) NSString *launchImageName;    //default图片名称
@property (nonatomic, strong) NSString *localModel;         //地方型号  （国际化区域名称）
@property (nonatomic, strong) NSString *resolution;         //分辨率
@property (nonatomic, strong) NSString *releaseChannel;     //分发渠道

@property (nonatomic, assign) CGFloat  widthScaleRatio;     //宽适配比率,以iPhone6为基本
@property (nonatomic, assign) CGFloat  heighScaleRatio;     //高适配比率,以iPhone6为基本
@property (nonatomic, assign) CGFloat  screenWidth;
@property (nonatomic, assign) CGFloat  screenHeigh;
@property (nonatomic, assign) CGFloat  scale;               //倍率

@property (nonatomic, strong) NSString *deviceId;           //服务器返还的设备标示
@property (nonatomic, strong) NSString *AppID;              //标识应用唯一性
@property (nonatomic, strong) NSString *AppName;            //app显示名称
@property (nonatomic, strong) NSString *AppVersion;         //app版本号
@property (nonatomic, strong) NSString *AppBuildVersion;    //app构建版本号

+ (DeviceManage *) deviceManage;//单例方法

- (void)getDeviceInfo; //设备信息

@end
