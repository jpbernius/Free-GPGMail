//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

#import <MFMessageConsumer-Protocol.h>
#import <MFQueryProgressMonitor-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface _MFMessageCollector : NSObject <MFMessageConsumer, MFQueryProgressMonitor>
{
    NSMutableArray *_messages;
    BOOL _didCancel;
}

@property(nonatomic) BOOL didCancel; // @synthesize didCancel=_didCancel;
//- (void).cxx_destruct;
- (void)finishedSendingMessages;
@property(readonly) BOOL shouldCancel;
- (void)newMessagesAvailable:(id)arg1 secondaryMessages:(id)arg2 fromUpdate:(BOOL)arg3;
@property(readonly, copy, nonatomic) NSArray *messages;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

