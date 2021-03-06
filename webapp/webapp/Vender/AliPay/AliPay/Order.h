//
//  Order.h
//  AlixPayDemo
//
//  Created by 方彬 on 11/2/13.
//
//

#import <Foundation/Foundation.h>

@interface Order : NSObject

@property(nonatomic, copy) NSString * partner;
@property(nonatomic, copy) NSString * seller;
@property(nonatomic, copy) NSString * tradeNO;
@property(nonatomic, copy) NSString * productName;
@property(nonatomic, copy) NSString * productDescription;
@property(nonatomic, copy) NSString * amount;
@property(nonatomic, copy) NSString * notifyURL;

@property(nonatomic, copy) NSString * service;   //mobile.securitypay.pay
@property(nonatomic, copy) NSString * paymentType;  //1
@property(nonatomic, copy) NSString * inputCharset;  //utf-8
@property(nonatomic, copy) NSString * splitFoundInfo;
@property(nonatomic, copy) NSString * itBPay; //30m
@property(nonatomic, copy) NSString * showUrl;
@property(nonatomic, copy) NSString * product_code;


@property(nonatomic, copy) NSString * rsaDate;//可选
@property(nonatomic, copy) NSString * appID;//可选

@property(nonatomic, copy) NSString *isInternet;

@property(nonatomic, readonly) NSMutableDictionary * extraParams;


@end
