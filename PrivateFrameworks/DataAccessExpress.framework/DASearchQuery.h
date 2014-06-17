/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString, <DASearchQueryConsumer>;

@interface DASearchQuery : NSObject  {
    int _timeLimit;
    int _state;
    NSString *_searchString;
    <DASearchQueryConsumer> *_consumer;
    NSString *_searchID;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
}

@property(copy) NSString * searchString;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property unsigned int maxResults;
@property int timeLimit;
@property <DASearchQueryConsumer> * consumer;
@property(copy) NSString * searchID;
@property int state;

+ (id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2;

- (void)setMaxResults:(unsigned int)arg1;
- (unsigned int)maxResults;
- (bool)isQueryRunning;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (int)timeLimit;
- (void)setTimeLimit:(int)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (void)setConsumer:(id)arg1;
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (id)searchString;
- (void)sendResultsToConsumer:(id)arg1;
- (id)consumer;
- (void)sendFinishedToConsumerWithError:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setState:(int)arg1;
- (int)state;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;

@end
