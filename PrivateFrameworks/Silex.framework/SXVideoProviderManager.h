/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoProviderManager : NSObject <SXVideoEventTrackerProviding, SXVideoProviderProviding, SXVideoSkipThresholdProviding> {
    <SXVideoAdProviderFactory> * _videoAdProviderFactory;
    NSMapTable * _videoAdProviders;
    <SXVideoProviderFactory> * _videoProviderFactory;
    NSMapTable * _videoProviders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXVideoAdProviderFactory> *videoAdProviderFactory;
@property (nonatomic, readonly) NSMapTable *videoAdProviders;
@property (nonatomic, readonly) <SXVideoProviderFactory> *videoProviderFactory;
@property (nonatomic, readonly) NSMapTable *videoProviders;

- (void).cxx_destruct;
- (id)initWithVideoProviderFactory:(id)arg1 videoAdProviderFactory:(id)arg2;
- (id)skipThresholdForVideo:(id)arg1;
- (id)videoAdProviderFactory;
- (id)videoAdProviderForVideo:(id)arg1;
- (id)videoAdProviders;
- (id)videoEventTrackerForVideo:(id)arg1;
- (id)videoProviderFactory;
- (id)videoProviderForVideo:(id)arg1;
- (id)videoProviders;

@end