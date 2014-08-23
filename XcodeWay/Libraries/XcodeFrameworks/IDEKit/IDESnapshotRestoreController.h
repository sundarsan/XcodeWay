/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTReplacementView, IDENavigableItemCoordinator, IDESnapshotsListController, IDEWorkspace, NSButton, NSDictionary, NSWindow;

@interface IDESnapshotRestoreController : IDEViewController
{
    DVTReplacementView *_replacementView;
    DVTBorderedView *_borderedView;
    NSWindow *_listSheet;
    NSButton *_restoreButton;
    NSButton *_cancelButton;
    IDESnapshotsListController *_listController;
    IDEWorkspace *_workspace;
    NSWindow *_workspaceWindow;
    IDENavigableItemCoordinator *_coordinator;
    NSDictionary *_localizedStrings;
    BOOL _showProgress;
}

+ (id)defaultViewNibName;
+ (void)runRestoreSheetForWorkspace:(id)arg1 window:(id)arg2;
- (void)_changeRestoreAndCancelButtonStateTo:(BOOL)arg1;
- (void)_generateLocalizedStrings;
- (id)_pathToRestorePath;
- (void)cancelRestore:(id)arg1;
- (id)initUsingDefaultNib;
- (void)invalidate;
@property IDESnapshotsListController *listController; // @synthesize listController=_listController;
- (void)listControllerAction:(id)arg1;
- (void)loadView;
- (void)nothingToRestoreSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)restoreAction:(id)arg1;
- (void)runRestoreSheetForWorkspace:(id)arg1 window:(id)arg2;
@property BOOL showProgress; // @synthesize showProgress=_showProgress;
@property IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property NSWindow *workspaceWindow; // @synthesize workspaceWindow=_workspaceWindow;
- (void)snapshotsListSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;

@end

