
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Tue, 25 Apr 2023 18:07:26 GMT


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
