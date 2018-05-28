//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface NetworkControl : PBGeneratedMessage
{
    unsigned int hasPortList:1;
    unsigned int hasTimeoutList:1;
    unsigned int hasMinNoopInterval:1;
    unsigned int hasMaxNoopInterval:1;
    unsigned int hasTypingInterval:1;
    unsigned int hasNoopIntervalTime:1;
    unsigned int minNoopInterval;
    unsigned int maxNoopInterval;
    int typingInterval;
    int noopIntervalTime;
    NSString *portList;
    NSString *timeoutList;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetNoopIntervalTime:) int noopIntervalTime; // @synthesize noopIntervalTime;
@property(readonly, nonatomic) BOOL hasNoopIntervalTime; // @synthesize hasNoopIntervalTime;
@property(nonatomic, setter=SetTypingInterval:) int typingInterval; // @synthesize typingInterval;
@property(readonly, nonatomic) BOOL hasTypingInterval; // @synthesize hasTypingInterval;
@property(nonatomic, setter=SetMaxNoopInterval:) unsigned int maxNoopInterval; // @synthesize maxNoopInterval;
@property(readonly, nonatomic) BOOL hasMaxNoopInterval; // @synthesize hasMaxNoopInterval;
@property(nonatomic, setter=SetMinNoopInterval:) unsigned int minNoopInterval; // @synthesize minNoopInterval;
@property(readonly, nonatomic) BOOL hasMinNoopInterval; // @synthesize hasMinNoopInterval;
@property(retain, nonatomic, setter=SetTimeoutList:) NSString *timeoutList; // @synthesize timeoutList;
@property(readonly, nonatomic) BOOL hasTimeoutList; // @synthesize hasTimeoutList;
@property(retain, nonatomic, setter=SetPortList:) NSString *portList; // @synthesize portList;
@property(readonly, nonatomic) BOOL hasPortList; // @synthesize hasPortList;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
