/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSURL;

@interface _IDEIssueDocumentURL : NSObject
{
    NSURL *_url;
    int _type;
}

- (id)initWithURL:(id)arg1 type:(int)arg2;
@property(readonly) int issueType; // @synthesize issueType=_type;
@property(readonly) NSURL *url; // @synthesize url=_url;

@end

