/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class NSArray, NSSet;

@interface CalLogFilter : NSObject  {
    int _minimumLevel;
    NSArray *_includes;
    NSArray *_excludes;
    NSArray *_includesAsRegexes;
    NSArray *_excludesAsRegexes;
    NSSet *_includesRegardlessOfLevel;
}

@property int minimumLevel;
@property(copy) NSArray * includes;
@property(copy) NSArray * excludes;
@property(copy) NSSet * includesRegardlessOfLevel;
@property(retain) NSArray * includesAsRegexes;
@property(retain) NSArray * excludesAsRegexes;


- (void)setIncludesRegardlessOfLevel:(id)arg1;
- (id)excludesAsRegexes;
- (bool)proceedProcessingEnvelope:(id)arg1;
- (void)setExcludesAsRegexes:(id)arg1;
- (void)setIncludesAsRegexes:(id)arg1;
- (id)generateRegexesForPatterns:(id)arg1;
- (int)minimumLevel;
- (id)includesRegardlessOfLevel;
- (id)includesAsRegexes;
- (id)excludes;
- (id)includes;
- (void)setExcludes:(id)arg1;
- (void)setIncludes:(id)arg1;
- (void)setMinimumLevel:(int)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
