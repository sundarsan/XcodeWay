/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEAlert.h"

@interface IDEShowEditorAlert : IDEAlert
{
    int _action;
    int _visibility;
}

@property(nonatomic) int action; // @synthesize action=_action;
- (id)actions;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(id)arg4;
@property(nonatomic) int visibility; // @synthesize visibility=_visibility;
- (id)visibilities;

@end

