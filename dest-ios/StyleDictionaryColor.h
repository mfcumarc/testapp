
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 26 Apr 2023 19:35:15 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBasePrimary,
ColorBaseSecondary,
ColorBaseAccent,
ColorBasePureWhite,
ColorBaseDark
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
