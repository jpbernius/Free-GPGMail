//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <AppKit/NSTableHeaderCell.h>

@class MessageListCell;

@interface MessageListHeaderCell : NSTableHeaderCell
{
    unsigned long long _imageAlignment;
    MessageListCell *_realCell;
}

@property(retain, nonatomic) MessageListCell *realCell; // @synthesize realCell=_realCell;
//- (void).cxx_destruct;
- (void)setImageAlignment:(unsigned long long)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

