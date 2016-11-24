//  OCHamcrest by Jon Reid, http://qualitycoding.org/about/
//  Copyright 2016 hamcrest.org. See LICENSE.txt

#import <OCHamcrest/HCBaseMatcher.h>


@interface HCSubstringMatcher : HCBaseMatcher

@property (nonatomic, copy, readonly) NSString *substring;

- (instancetype)initWithSubstring:(NSString *)substring NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end
