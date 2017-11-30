//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMChatItemViewerWindow.h"

#import "WNNoteRichEditDelegate.h"

@class MMFavoritesJsBridge, NSMutableArray, NSMutableDictionary, NSString, WebView;

__attribute__((visibility("hidden")))
@interface MMChatAppNoteViewerWindow : MMChatItemViewerWindow <WNNoteRichEditDelegate>
{
    BOOL _bIsLoadEnd;
    WebView *_webView;
    MMFavoritesJsBridge *_jsBridge;
    NSString *_indexFilePath;
    long long _maxLocalId;
    NSMutableArray *_itemUtilArray;
    NSMutableArray *_itemArray;
    NSMutableDictionary *_itemDict;
    NSString *_noteHtmlPath;
}

@property(retain, nonatomic) NSString *noteHtmlPath; // @synthesize noteHtmlPath=_noteHtmlPath;
@property(retain, nonatomic) NSMutableDictionary *itemDict; // @synthesize itemDict=_itemDict;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain, nonatomic) NSMutableArray *itemUtilArray; // @synthesize itemUtilArray=_itemUtilArray;
@property(nonatomic) long long maxLocalId; // @synthesize maxLocalId=_maxLocalId;
@property(nonatomic) BOOL bIsLoadEnd; // @synthesize bIsLoadEnd=_bIsLoadEnd;
@property(retain, nonatomic) NSString *indexFilePath; // @synthesize indexFilePath=_indexFilePath;
@property(retain, nonatomic) MMFavoritesJsBridge *jsBridge; // @synthesize jsBridge=_jsBridge;
@property(retain, nonatomic) WebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (id)generateRespData;
- (void)handleFinishDownLoadFavItem:(id)arg1 type:(int)arg2;
- (void)convertFavItem;
- (void)loadIndexFile:(id)arg1;
- (void)initNoteItemUtil;
- (id)insertTitleToContentBegin:(id)arg1 withTitle:(id)arg2;
- (id)noteItemFromLocalEditorId:(id)arg1;
- (void)configItemId:(id)arg1;
- (void)updateItem:(id)arg1;
- (void)insertItem:(id)arg1;
- (BOOL)showLoadingIndicator;
- (id)shareSubMenuSupportActions;
- (id)supportedActions;
- (struct CGSize)sizeForContent;
- (BOOL)toolbarAutohides;
- (void)willStartOpening:(BOOL)arg1;
- (void)onClickNode:(id)arg1 andRect:(struct CGRect)arg2;
- (void)changeWebviewEditable:(BOOL)arg1;
- (void)registerJsCallback;
- (void)setupData;
- (void)setupWebView;
- (void)windowDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
