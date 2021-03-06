/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordFetchAggregator : CKDDatabaseOperation {
    unsigned long long  _curFetchOrder;
    NSSet * _desiredKeys;
    id /* block */  _fetchAggregatorCompletionBlock;
    bool  _fetchAssetContents;
    NSObject<OS_dispatch_group> * _fetchGroup;
    NSMutableDictionary * _fetchInfosByOrder;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    NSObject<OS_dispatch_source> * _fetchSource;
    unsigned long long  _highestReturnedOrder;
    bool  _markedToFinishByParent;
    bool  _preserveOrdering;
    CKDRecordCache * _recordCache;
    NSObject<OS_dispatch_source> * _recordReadySource;
    bool  _started;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property unsigned long long curFetchOrder;
@property (nonatomic, retain) NSSet *desiredKeys;
@property (nonatomic, copy) id /* block */ fetchAggregatorCompletionBlock;
@property (nonatomic) bool fetchAssetContents;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchGroup;
@property (nonatomic, retain) NSMutableDictionary *fetchInfosByOrder;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *fetchQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *fetchSource;
@property unsigned long long highestReturnedOrder;
@property (getter=isMarkedToFinishByParent) bool markedToFinishByParent;
@property (nonatomic) bool preserveOrdering;
@property (nonatomic, readonly) CKDRecordCache *recordCache;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *recordReadySource;
@property bool started;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timerSource;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)_addRecordFetchInfo:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_finishRecordFetchAggregator;
- (void)_flushFetchedRecordsToConsumerLocked;
- (void)_flushFetchedRecordsToConsumerNoOrderingLocked;
- (void)_flushFetchedRecordsToConsumerOrderedLocked;
- (void)_lockedRescheduleQueuedFetchesTimer;
- (void)_lockedSendFetchRequest;
- (void)_performCallbackForFetchInfoLocked:(id)arg1;
- (void)_recordFetchesAvailable;
- (unsigned long long)curFetchOrder;
- (void)dealloc;
- (id)description;
- (id)desiredKeys;
- (id /* block */)fetchAggregatorCompletionBlock;
- (bool)fetchAssetContents;
- (id)fetchGroup;
- (id)fetchInfosByOrder;
- (id)fetchQueue;
- (void)fetchRecordFromResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)fetchSource;
- (void)finishIfAppropriate;
- (unsigned long long)highestReturnedOrder;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (bool)isMarkedToFinishByParent;
- (void)main;
- (bool)preserveOrdering;
- (id)recordCache;
- (id)recordReadySource;
- (void)setCurFetchOrder:(unsigned long long)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchAggregatorCompletionBlock:(id /* block */)arg1;
- (void)setFetchAssetContents:(bool)arg1;
- (void)setFetchGroup:(id)arg1;
- (void)setFetchInfosByOrder:(id)arg1;
- (void)setFetchQueue:(id)arg1;
- (void)setFetchSource:(id)arg1;
- (void)setHighestReturnedOrder:(unsigned long long)arg1;
- (void)setMarkedToFinishByParent:(bool)arg1;
- (void)setPreserveOrdering:(bool)arg1;
- (void)setRecordReadySource:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setTimerSource:(id)arg1;
- (bool)started;
- (id)timerSource;

@end
