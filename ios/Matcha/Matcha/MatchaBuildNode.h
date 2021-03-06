#import <UIKit/UIKit.h>
#import <MatchaBridge/MatchaBridge.h>
@class MatchaPaintOptions;
@class MatchaLayoutGuide;
@class MatchaViewPBNode;
@class MatchaViewPBRoot;
@class MatchaLayoutPBGuide;
@class MatchaPaintPBStyle;
@class MatchaPBRecognizer;
@class MatchaViewPBLayoutPaintNode;
@class GPBInt64ObjectDictionary;
@class MatchaViewPBLayoutPaintNode;
@class MatchaViewPBBuildNode;
@class GPBInt64Array;
@class GPBAny;

@interface MatchaBuildNode : NSObject
- (id)initWithProtobuf:(MatchaViewPBBuildNode *)node;
@property (nonatomic, readonly) GPBInt64Array *childIds;
@property (nonatomic, readonly) NSMutableDictionary<NSString*, NSData *> *nativeValues;
@property (nonatomic, readonly) NSString *nativeViewName;
@property (nonatomic, readonly) NSData *nativeViewState;
@property (nonatomic, readonly) NSNumber *identifier;
@property (nonatomic, readonly) NSNumber *buildId;
@property (nonatomic, readonly) NSDictionary<NSNumber *, GPBAny *> *touchRecognizers;
@end
