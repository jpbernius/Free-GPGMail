//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class MCMimePart, NSMutableData;

@interface _MCMimeHeaderScanContext : NSObject
{
    const char *_current;
    const char *_end;
    unsigned long long _encodingHint;
    NSMutableData *_dataBuf;
    MCMimePart *_mimePart;
}

@property(retain, nonatomic) MCMimePart *mimePart; // @synthesize mimePart=_mimePart;
@property(retain, nonatomic) NSMutableData *dataBuf; // @synthesize dataBuf=_dataBuf;
@property(nonatomic) unsigned long long encodingHint; // @synthesize encodingHint=_encodingHint;
@property(nonatomic) const char *end; // @synthesize end=_end;
@property(nonatomic) const char *current; // @synthesize current=_current;
//- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;

@end

