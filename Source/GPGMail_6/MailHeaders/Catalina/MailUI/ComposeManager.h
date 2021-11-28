//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class ComposeWindowController, NSArray, NSMutableArray, NSMutableSet, NSTimer;
@protocol ComposeContext;

@interface ComposeManager : NSObject
{
    NSMutableSet *_composeViewControllers;
    NSMutableSet *_composeWindowControllers;
    NSMutableArray *_restorationDictionaries;
    NSTimer *_autosaveTimer;
    NSArray *_delayedComposeDictionaries;
    ComposeWindowController *_delayedWindowController;
    id /*<ComposeContext>*/ _applicationRestoringContext;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) __weak id /*<ComposeContext>*/ applicationRestoringContext; // @synthesize applicationRestoringContext=_applicationRestoringContext;
@property(retain, nonatomic) ComposeWindowController *delayedWindowController; // @synthesize delayedWindowController=_delayedWindowController;
@property(copy, nonatomic) NSArray *delayedComposeDictionaries; // @synthesize delayedComposeDictionaries=_delayedComposeDictionaries;
@property(retain, nonatomic) NSTimer *autosaveTimer; // @synthesize autosaveTimer=_autosaveTimer;
//- (void).cxx_destruct;
- (id)composeBackEndsForScripting;
- (void)invalidateApplicationActivationState;
- (void)composeContext:(id)arg1 wantsToRestoreApplication:(id)arg2;
- (void)_addRestorationComposeDictionaries:(id)arg1 toWindowController:(id)arg2 isMiniaturized:(BOOL)arg3;
- (void)restorePendingDraftWindows;
- (void)addRestorationDictionariesObject:(id)arg1;
- (void)windowControllerWillClose:(id)arg1;
- (id)composeViewControllerForShareUUID:(id)arg1;
- (void)willCloseAllEditors;
- (void)_autosaveTimerFired:(id)arg1;
- (void)unregisterController:(id)arg1;
- (void)registerController:(id)arg1;
- (id)createWindowControllerWithViewController:(id)arg1;
- (id)existingControllerForBackEnd:(id)arg1;
- (id)existingControllerForMessage:(id)arg1;
- (id)_windowController;
- (void)setContext:(id)arg1 forViewController:(id)arg2;
- (id)createController;
- (void)setMessage:(id)arg1 forComposeController:(id)arg2;
- (id)createControllerForPendingMessage;
- (id)createControllerWithContext:(id)arg1 withBackEnd:(id)arg2;
- (id)createControllerWithContext:(id)arg1;
- (void)dealloc;
- (id)init;

@end

