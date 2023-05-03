
//
// StyleDictionaryColor.m
//

// Do not edit directly
// Generated on Wed, 03 May 2023 15:34:00 GMT


#import "StyleDictionaryColor.h"

@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
[UIColor colorWithRed:0.878f green:0.243f blue:0.843f alpha:1.000f],
[UIColor colorWithRed:0.502f green:0.106f blue:0.478f alpha:1.000f],
[UIColor colorWithRed:0.537f green:0.827f blue:1.000f alpha:1.000f],
[UIColor colorWithRed:1.000f green:1.000f blue:1.000f alpha:1.000f],
[UIColor colorWithRed:0.000f green:0.000f blue:0.000f alpha:1.000f],
[UIColor colorWithRed:0.878f green:0.243f blue:0.843f alpha:1.000f],
[UIColor colorWithRed:0.502f green:0.106f blue:0.478f alpha:1.000f],
[UIColor colorWithRed:0.957f green:0.600f blue:0.557f alpha:1.000f],
[UIColor colorWithRed:0.537f green:0.827f blue:1.000f alpha:1.000f],
[UIColor colorWithRed:0.000f green:0.000f blue:0.000f alpha:1.000f],
[UIColor colorWithRed:1.000f green:1.000f blue:1.000f alpha:1.000f]
    ];
  });

  return colorArray;
}

@end
