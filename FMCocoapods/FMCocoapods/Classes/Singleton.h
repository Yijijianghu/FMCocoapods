//
//  Singleton.h
//  worldUnionLoan
//
//  Created by admin on 2018/3/15.
//  Copyright © 2018年 lishaohua. All rights reserved.
//


typedef NS_ENUM(NSInteger,userRoleType) {
    leaderUserType = 1,
    areaUserType = 2,
    cooperativeUserType=3,
    salesManUserType=4,
    possessionMan=5,
    VisaInterviewMan=6,
    other,
};

typedef NS_ENUM(NSInteger,payComefromViewType) {
    webViewType = 1,
    earnestType = 2,
    payDecorationType = 3,
};



#import <Foundation/Foundation.h>

@interface Singleton : NSObject
+(instancetype)shareSingleton;
@property (nonatomic,assign) BOOL isJumpJZAlbumViewController;
@property (nonatomic,assign) BOOL isStartFirstTime;
@property (nonatomic,retain) NSMutableArray *productAry;
@property (nonatomic,assign) userRoleType userType;
@property(nonatomic,assign)  BOOL netWorkingConnect;
@property(nonatomic,assign)  BOOL isFirstToWelcomeViewController;
@property(nonatomic,assign)  BOOL isRetryLOgin;
/**
 missNetworking YES失去网络连接 NO网络连接
 */
@property(nonatomic,assign)  BOOL missNetworking;
@property(nonatomic,assign)  BOOL isHaveRegisterPhoneNumber;
@property(nonatomic,assign)  BOOL loginEndIsAuthenticate;//登录结束是否实名认证

@property(nonatomic,assign)  BOOL isCreatingAgreement;//正在z生成合同
@property(nonatomic,assign)  BOOL isAgainOpenBigImg; //退出视频和VR后再次打开大图浏览模式

@property (nonatomic,assign) BOOL isOrderPaySucessAndComingMyDecorationOrderListVC;//订单支付成功退回首页进入订单列表界面


@property(nonatomic,assign)  NSInteger currentSelectMYhomeVCImgIndex;

@property(nonatomic,assign)  payComefromViewType currentPayComefromViewController;
@property (nonatomic,retain) NSMutableArray *propertyTypeArray;//物业类型数组
@property (nonatomic,retain) NSMutableArray *shareHomeStyleArray;//风格数组
@property (nonatomic,retain) NSMutableArray *houseNameAndDecorationName;
@property (nonatomic,retain) NSMutableArray *shareDetail_First_Load_Ary;//记录晒家详情初次加载图片，防止多次调用
/**
 shareDetailThree_First_Load_Ary 图片数组，记录晒家详情section row是否完全加载 数组数量为row 初始全为0 如果该row下所有图片都加载出来，设置为1
 */
@property (nonatomic,retain) NSMutableArray *shareDetailThree_First_Load_Ary;


@property (nonatomic,assign,getter=isJLDCurrentOffsetY) CGFloat JLDCurrentOffsetY;

@property (nonatomic,retain) NSString* theReposeHtmlString;
@property (nonatomic,retain) NSString* imgSizeRate;//宽高比例

@property (nonatomic,retain,getter=isBASEHtmlURL) NSString* BASEHtmlURL;

@property (nonatomic,retain,getter=isBASEURL) NSString* BASEURL;
@property (nonatomic,retain,getter=isApplicationString) NSString* applicationString;
@property (nonatomic,retain,getter=isProductCodeString) NSString* productCodeString;
@property (nonatomic,retain,getter=isappToken) NSString* appToken;

@property (nonatomic,retain,getter=isLoginToken) NSString* LoginToken;
@property (nonatomic,assign) BOOL  isPaySuccess; //记录调用h5支付回调方法防止重复回调
@property (nonatomic,retain) NSString *  temporarilyTokenString;//无登录状态临时token

@property (nonatomic,retain) NSString *MyHomeDetailViewControllervideoUrl;//视频链接
@property (nonatomic,retain) NSString *MyHomeDetailViewControllerVRUrl;//vr链接



/*
 recordScanSignParameterDictionary
 [
 单号
 类型  --> 1.案场2非案场3家秒的4JLD(暂无mianqian）
 临时token
 ]
 
 */
@property (nonatomic,retain) NSMutableArray *recordScanSignParameterDictionary;
@property (nonatomic,retain) NSDictionary *autoInterVWDictionary;


@property (nonatomic,retain) NSString* resetBunessToken;

@property (nonatomic,retain,getter=iscityCodeAry) NSArray *cityCodeAry;

@property (nonatomic,retain,getter=ispersonInfoAry) NSArray *personInfoAry;

@property (nonatomic,retain) NSDictionary *loanApplyInfomationVCDictionary;
@property (nonatomic,retain) NSMutableArray *loanApplyProgressVCDictionary;
@property (nonatomic,retain,getter=isScanSignDictionary) NSDictionary *scanSignDictionary;
@property (nonatomic,retain) NSMutableArray *loanApplyScreenDictionary;

@property (nonatomic,copy) void(^GetAddressBookBlock)(NSDictionary *dic);
@property (nonatomic,copy) void(^GetLOcationBlock)(NSDictionary *dic);


@property (nonatomic,retain) NSDictionary *myHomeDetailDictionary;//我的家详情字典

@end
