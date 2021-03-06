//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface DPPoiRate : PBGeneratedMessage
{
    unsigned int hasRate:1;
    unsigned int hasTaste:1;
    unsigned int hasService:1;
    unsigned int hasDecoration:1;
    float rate;
    float taste;
    float service;
    float decoration;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetDecoration:) float decoration; // @synthesize decoration;
@property(readonly, nonatomic) BOOL hasDecoration; // @synthesize hasDecoration;
@property(nonatomic, setter=SetService:) float service; // @synthesize service;
@property(readonly, nonatomic) BOOL hasService; // @synthesize hasService;
@property(nonatomic, setter=SetTaste:) float taste; // @synthesize taste;
@property(readonly, nonatomic) BOOL hasTaste; // @synthesize hasTaste;
@property(nonatomic, setter=SetRate:) float rate; // @synthesize rate;
@property(readonly, nonatomic) BOOL hasRate; // @synthesize hasRate;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

