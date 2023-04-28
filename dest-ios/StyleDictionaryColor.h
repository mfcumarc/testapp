
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Fri, 28 Apr 2023 16:19:00 GMT


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
