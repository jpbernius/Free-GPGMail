//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <Mail/NSObject-Protocol.h>

@class MFEWSFetchMessageMetadataOperation, MFEWSMailboxItemsBatch;

@protocol MFEWSFetchMessageMetadataOperationDelegate <NSObject>
+ (id)new;
- (void)fetchMessageMetadataOperation:(MFEWSFetchMessageMetadataOperation *)arg1 didPopulateBatch:(MFEWSMailboxItemsBatch *)arg2;
- (id)init;
@end

