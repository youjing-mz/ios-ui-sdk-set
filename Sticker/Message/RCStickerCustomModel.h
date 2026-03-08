//
//  RCStickerCustomModel.h
//  RongCloudOpenSource

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RCStickerCustomModel : NSObject

@property (nonatomic, strong) NSString *emojiData;
@property (nonatomic, assign) int emojiId;
@property (nonatomic, assign) int type;
@property (nonatomic, strong) NSString *image;

@end

NS_ASSUME_NONNULL_END
