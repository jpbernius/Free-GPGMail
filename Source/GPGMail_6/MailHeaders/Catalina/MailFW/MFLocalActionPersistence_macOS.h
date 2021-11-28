//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EDLocalActionPersistence.h>

#import <EDLocalActionPersistenceSubClassMethods-Protocol.h>

@class NSString;

@interface MFLocalActionPersistence_macOS : EDLocalActionPersistence <EDLocalActionPersistenceSubClassMethods>
{
}

- (void)handledFailedCopyForMessages:(id)arg1;
- (BOOL)moveSupportedFromMailboxURL:(id)arg1 toURL:(id)arg2;
- (long long)mailboxDatabaseIDForURL:(id)arg1;
- (id)mailboxURLForDatabaseID:(long long)arg1;
- (id)messageForDatabaseID:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

