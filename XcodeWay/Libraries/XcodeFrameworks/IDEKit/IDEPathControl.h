/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPathControl.h"

@interface IDEPathControl : NSPathControl
{
}

+ (Class)cellClass;
+ (unsigned long long)defaultFocusRingType;
+ (void)initialize;
- (void)_popUpMenuForComponentCell:(id)arg1;
- (id)accessibilityPopUpMenuParent:(id)arg1;
@property int borderSides;
- (id)dvtExtraBindings;
- (struct CGRect)grabRect;
@property int gradientStyle;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
@property BOOL lastComponentFillsWidth;
- (id)outputSelection;
- (void)popUpMenuForComponentCell:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)updateBoundContent;
- (void)updateBoundSelectedNavigableItem;
- (void)viewWillMoveToWindow:(id)arg1;

@end

