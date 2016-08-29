/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDSourceManagerCacheItem : NSObject {
    NSArray * _sourceIDs;
    NSArray * _sources;
    bool  _userOrdered;
}

@property (nonatomic, retain) NSArray *sourceIDs;
@property (nonatomic, retain) NSArray *sources;
@property (nonatomic) bool userOrdered;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithSources:(id)arg1 IDs:(id)arg2 userOrdered:(bool)arg3;
- (void)setSourceIDs:(id)arg1;
- (void)setSources:(id)arg1;
- (void)setUserOrdered:(bool)arg1;
- (id)sourceIDs;
- (id)sources;
- (bool)userOrdered;

@end