//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <AppKit/NSPopUpButton.h>

@class NSMenu, NSString, NSURL, RulesPreferences;

@interface AppleScriptPopUpButton : NSPopUpButton
{
    BOOL _amIAwake;
    NSString *_previouslySelectedItem;
    NSURL *_applicationScriptsDirectoryURL;
    RulesPreferences *_delegate;
    NSMenu *_appleScriptFilesMenu;
}

@property(nonatomic) BOOL amIAwake; // @synthesize amIAwake=_amIAwake;
@property(retain, nonatomic) NSMenu *appleScriptFilesMenu; // @synthesize appleScriptFilesMenu=_appleScriptFilesMenu;
@property(nonatomic) __weak RulesPreferences *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *applicationScriptsDirectoryURL; // @synthesize applicationScriptsDirectoryURL=_applicationScriptsDirectoryURL;
@property(retain, nonatomic) NSString *previouslySelectedItem; // @synthesize previouslySelectedItem=_previouslySelectedItem;
//- (void).cxx_destruct;
- (void)_invalidateAppleScriptFilesMenu;
- (void)_popupMenuChanged:(id)arg1;
- (void)resetPopUp;
@property(readonly, copy, nonatomic) NSString *selectedAppleScriptPath;
- (void)selectAppleScriptPath:(id)arg1;
- (void)_configureAppleScriptFilesMenu;
- (id)_appleScriptFilesFromMagicDirectory;
- (void)viewDidMoveToWindow;
- (id)menu;
- (void)dealloc;
- (void)awakeFromNib;

@end

