//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@interface SpotlightDiagnostics : NSObject
{
}

//+ (void)_checkMessages:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (id)_randomMessagesFromMailbox:(id)arg1 sinceCutoffDate:(id)arg2 sampleSize:(unsigned long long)arg3;
+ (BOOL)_performVerificationWithActivity:(id)arg1;
+ (id)_verificationActivity;
+ (void)scheduleVerification;
+ (id)diagnosticStringForMessages:(id)arg1;
+ (id)log;

@end

