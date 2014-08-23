/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSToolbar.h"

@class NSSet;

@interface IDECustomToolbar : NSToolbar
{
    NSSet *_allowedDisplayModes;
    NSSet *_allowedSizeModes;
}

- (BOOL)_allowsDisplayMode:(unsigned long long)arg1;
- (BOOL)_allowsSizeMode:(unsigned long long)arg1;
- (id)_customMetrics;
@property(copy) NSSet *allowedDisplayModes; // @synthesize allowedDisplayModes=_allowedDisplayModes;
@property(copy) NSSet *allowedSizeModes; // @synthesize allowedSizeModes=_allowedSizeModes;

@end

