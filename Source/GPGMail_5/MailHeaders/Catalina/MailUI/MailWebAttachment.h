//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MUIWebAttachment.h>

@class MCAttachment, MCMessage, NSError, NSOperationQueue, NSURL;

@interface MailWebAttachment : MUIWebAttachment
{
    MCMessage *_parentMessage;
    MCAttachment *_backingAttachment;
    NSURL *_mailDownloadsFileURL;
//    CDUnknownBlockType _downloadCompletionBlock;
    NSOperationQueue *_downloadQueue;
    NSError *_downloadError;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(retain) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
//@property(copy) CDUnknownBlockType downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
@property(retain) NSURL *mailDownloadsFileURL; // @synthesize mailDownloadsFileURL=_mailDownloadsFileURL;
@property(readonly, nonatomic) MCAttachment *backingAttachment; // @synthesize backingAttachment=_backingAttachment;
@property(nonatomic) __weak MCMessage *parentMessage; // @synthesize parentMessage=_parentMessage;
//- (void).cxx_destruct;
- (BOOL)isAutoArchiveAttachment;
- (void)_addPrivateAttributes:(id)arg1;
//- (void)startDownloadingIfNeededWithProgress:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)downloadProgress;
- (BOOL)shouldAlwaysAutomaticallyDownload;
- (BOOL)isDataDownloaded;
- (id)uti;
- (id)downloadDirectory;
- (void)_attachmentDataDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)writeToURL:(id)arg1;
- (id)fileURL;
- (id)filenameForSaving;
- (id)filename;
- (unsigned long long)fileSize;
- (id)mimeType;
- (id)iconImage;
- (id)fileWrapper;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileWrapper:(id)arg1;
- (id)initWithMCAttachment:(id)arg1;

@end

