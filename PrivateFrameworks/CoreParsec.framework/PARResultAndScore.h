/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARResultAndScore : NSObject {
    double  _blendedBordaScore;
    double  _mediatypeScore;
    double  _personalizationBorda;
    SFSearchResult * _result;
    double  _serverBorda;
    double  _serverScore;
    double  _tldScore;
    double  _topicScore;
    double  _totalScore;
}

@property (nonatomic) double blendedBordaScore;
@property (nonatomic) double mediatypeScore;
@property (nonatomic) double personalizationBorda;
@property (nonatomic, retain) SFSearchResult *result;
@property (nonatomic) double serverBorda;
@property (nonatomic) double serverScore;
@property (nonatomic) double tldScore;
@property (nonatomic) double topicScore;
@property (nonatomic) double totalScore;

- (void).cxx_destruct;
- (double)blendedBordaScore;
- (double)mediatypeScore;
- (double)personalizationBorda;
- (id)result;
- (double)serverBorda;
- (double)serverScore;
- (void)setBlendedBordaScore:(double)arg1;
- (void)setMediatypeScore:(double)arg1;
- (void)setPersonalizationBorda:(double)arg1;
- (void)setResult:(id)arg1;
- (void)setServerBorda:(double)arg1;
- (void)setServerScore:(double)arg1;
- (void)setTldScore:(double)arg1;
- (void)setTopicScore:(double)arg1;
- (void)setTotalScore:(double)arg1;
- (double)tldScore;
- (double)topicScore;
- (double)totalScore;

@end
