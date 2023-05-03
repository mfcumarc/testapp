
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 03 May 2023 15:34:00 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBasePrimary,
ColorBaseSecondary,
ColorBaseAccent,
ColorBasePureWhite,
ColorBaseDark,
ColorPrimary,
ColorSecondary,
ColorTertiary,
ColorAccent,
ColorBlack,
ColorPureWhite
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
