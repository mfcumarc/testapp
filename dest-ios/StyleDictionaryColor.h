
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Tue, 25 Apr 2023 17:49:57 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBasePrimary,
ColorBaseSecondary,
ColorBaseAccent,
ColorBasePureWhite,
ColorBaseDark,
ColorFontBaseDark,
ColorFontBaseLight,
ColorFontDisplayLight,
ColorFontDisplayDark
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
