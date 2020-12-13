//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EDAccount-Protocol.h>

@class NSArray, NSString, NSURL;
@protocol ECMailbox, EDDeliveryAcount;

@protocol EDReceivingAccount <EDAccount>
@property(readonly) BOOL shouldArchiveByDefault;
@property(readonly) BOOL isLocalAccount;
@property(readonly, copy) NSString *smtpIdentifier;
@property(readonly) NSArray *emailAddresses;
@property(readonly) BOOL sourceIsManaged;
@property(readonly) BOOL isManaged;
- (BOOL)containsMailboxWithURL:(NSURL *)arg1;
- (id /*<ECMailbox>*/)mailboxForType:(long long)arg1;
- (void)setDeliveryAccount:(id /*<EDDeliveryAcount>*/)arg1;
- (id /*<EDDeliveryAcount>*/)deliveryAccount;
@end

