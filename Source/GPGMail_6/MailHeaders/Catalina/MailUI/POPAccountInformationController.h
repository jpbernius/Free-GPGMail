//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AccountInformationController.h"

@class NSNumber, NSNumberFormatter;

@interface POPAccountInformationController : AccountInformationController
{
    BOOL _isDeletingSeenMessages;
    long long _primitiveAccountDaysAfterDownloadToDeleteMessagesFromServer;
    NSNumberFormatter *_bigMessageWarningFormatter;
}

+ (id)keyPathsForValuesAffectingAccountBigMessageWarningSize;
+ (id)keyPathsForValuesAffectingAccountDaysAfterDownloadToDeleteMessagesFromServer;
+ (id)keyPathsForValuesAffectingAccountDeletesSeenMessages;
@property(nonatomic) __weak NSNumberFormatter *bigMessageWarningFormatter; // @synthesize bigMessageWarningFormatter=_bigMessageWarningFormatter;
@property(nonatomic) long long primitiveAccountDaysAfterDownloadToDeleteMessagesFromServer; // @synthesize primitiveAccountDaysAfterDownloadToDeleteMessagesFromServer=_primitiveAccountDaysAfterDownloadToDeleteMessagesFromServer;
@property(nonatomic) BOOL isDeletingSeenMessages; // @synthesize isDeletingSeenMessages=_isDeletingSeenMessages;
//- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *accountBigMessageWarningSize;
- (void)_deleteSeenMessagesCompleted:(id)arg1;
- (void)_deleteSeenMessagesStarted:(id)arg1;
- (void)deleteSeenMessages:(id)arg1;
@property(nonatomic) long long accountDaysAfterDownloadToDeleteMessagesFromServer;
@property(nonatomic) BOOL accountDeletesSeenMessages;
- (void)setUpUIForAccount:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

