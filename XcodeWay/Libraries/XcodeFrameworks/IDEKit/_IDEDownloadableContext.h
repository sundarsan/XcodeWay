/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTDotSeparatedVersion;

@interface _IDEDownloadableContext : NSObject
{
    DVTDotSeparatedVersion *_version;
    int _state;
}

- (id)initWithVersion:(id)arg1 state:(int)arg2;
@property(readonly) int state; // @synthesize state=_state;
@property(readonly) DVTDotSeparatedVersion *version; // @synthesize version=_version;

@end
