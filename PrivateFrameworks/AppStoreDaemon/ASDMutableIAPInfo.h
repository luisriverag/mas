//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreDaemon/ASDIAPInfo.h>

@class NSNumber, NSString;

@interface ASDMutableIAPInfo : ASDIAPInfo
{
}

@property(nonatomic) unsigned char type; // @dynamic type;
@property(retain, nonatomic) NSString *subscriptionFamilyId; // @dynamic subscriptionFamilyId;
@property(retain, nonatomic) NSNumber *purchaseTimestamp; // @dynamic purchaseTimestamp;
@property(retain, nonatomic) NSNumber *lastModifiedTimestamp; // @dynamic lastModifiedTimestamp;
@property(nonatomic) BOOL hasUsedIntroPricingOffer; // @dynamic hasUsedIntroPricingOffer;
@property(nonatomic) BOOL hasUsedFreeOffer; // @dynamic hasUsedFreeOffer;
@property(retain, nonatomic) NSNumber *expirationTimestamp; // @dynamic expirationTimestamp;
@property(retain, nonatomic) NSNumber *appAdamId; // @dynamic appAdamId;
@property(retain, nonatomic) NSNumber *adamId; // @dynamic adamId;

@end
