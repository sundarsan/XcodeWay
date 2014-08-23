/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSActionCell.h"

@class NSAttributedString, NSString;

@interface IDENavigatorSCMStatusCell : NSActionCell
{
    NSString *_localStatus;
    NSString *_serverStatus;
    NSAttributedString *_localAttrString;
    NSAttributedString *_serverAttrString;
    BOOL _hidden;
}

+ (void)initialize;
- (id)_barrelPathInRect:(struct CGRect)arg1 leftBarrel:(BOOL)arg2 rightBarrel:(BOOL)arg3;
- (void)_clearLocalStatusAttributedString;
- (void)_clearServerStatusAttributedString;
- (void)_drawStatusString:(id)arg1 inPathRect:(struct CGRect)arg2 view:(id)arg3;
- (id)_validateLocalStatusAttributedString;
- (id)_validateServerStatusAttributedString;
- (struct CGSize)cellSize;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
@property BOOL hidden; // @synthesize hidden=_hidden;
- (id)init;
@property(copy) NSString *localStatus;
@property(copy) NSString *serverStatus;

@end

