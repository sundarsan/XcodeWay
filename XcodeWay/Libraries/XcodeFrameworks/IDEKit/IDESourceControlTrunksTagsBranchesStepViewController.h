/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDESourceControlRepositoryCreationStep.h>

@class DVTBorderedView, NSImageView, NSString, NSTextField;

@interface IDESourceControlTrunksTagsBranchesStepViewController : IDESourceControlRepositoryCreationStep
{
    DVTBorderedView *_borderedView;
    NSTextField *_trunkField;
    NSTextField *_branchesField;
    NSTextField *_tagsField;
    NSImageView *_trunkValidImage;
    NSImageView *_branchesValidImage;
    NSImageView *_tagsValidImage;
    NSTextField *_trunkTag;
    NSTextField *_branchesTag;
    NSTextField *_tagsTag;
    NSString *_pendingTrunkUpdate;
    NSString *_pendingBranchesUpdate;
    NSString *_pendingTagsUpdate;
    BOOL _trunkValid;
    BOOL _branchesValid;
    BOOL _tagsValid;
    BOOL _automaticallyAddingInfo;
    BOOL _firstLoadAddingInfo;
}

+ (id)defaultViewNibName;
+ (id)keyPathsForValuesAffectingBranchesLocation;
+ (id)keyPathsForValuesAffectingReachableBranchesImage;
+ (id)keyPathsForValuesAffectingReachableTagsImage;
+ (id)keyPathsForValuesAffectingReachableTrunkImage;
+ (id)keyPathsForValuesAffectingTagsLocation;
+ (id)keyPathsForValuesAffectingTrunkLocation;
- (void)_setBranchesLocation:(id)arg1;
- (void)_setTagsLocation:(id)arg1;
- (void)_setTrunkLocation:(id)arg1;
- (void)addBindings;
- (id)branchesLocation;
@property BOOL branchesValid; // @synthesize branchesValid=_branchesValid;
- (BOOL)canFinish;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)commitInformation;
- (id)identifier;
- (id)nextStepIdentifier;
- (id)reachableBranchesImage;
- (id)reachableTagsImage;
- (id)reachableTrunkImage;
- (void)removeBindings;
- (void)setBranchesLocation:(id)arg1;
- (void)setBranchesLocation:(id)arg1 afterDelay:(double)arg2;
- (void)setTagsLocation:(id)arg1;
- (void)setTagsLocation:(id)arg1 afterDelay:(double)arg2;
@property BOOL tagsValid; // @synthesize tagsValid=_tagsValid;
- (void)setTrunkLocation:(id)arg1;
- (void)setTrunkLocation:(id)arg1 afterDelay:(double)arg2;
@property BOOL trunkValid; // @synthesize trunkValid=_trunkValid;
- (id)tagsLocation;
- (id)trunkLocation;
- (void)viewDidInstall;

@end

