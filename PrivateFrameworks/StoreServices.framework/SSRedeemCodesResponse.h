/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSDictionary;

@interface SSRedeemCodesResponse : NSObject <SSXPCCoding> {
    NSDictionary *_errors;
    NSArray *_redeemedCodes;
}

@property(readonly) NSArray * failedCodes;
@property(copy) NSArray * redeemedCodes;


- (void)dealloc;
- (void)setRedeemedCodes:(id)arg1;
- (void)setFailedCodes:(id)arg1;
- (id)redeemedCodes;
- (id)failedCodes;
- (id)errorForCode:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end