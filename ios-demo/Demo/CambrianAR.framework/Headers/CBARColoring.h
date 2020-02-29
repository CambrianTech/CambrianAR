//
//  CBARColoring.h
//  Cambrian
//
//  Created by Joel Teply on 11/4/12.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CBARColoring : NSObject

+ (NSArray *)complementsForColor:(UIColor *)color count:(int)count angle:(double)angleSpan;

+ (NSArray *)adjacentColors:(UIColor *)color count:(int)count angle:(double)angleSpan;

+ (NSArray *)shadesOfColor:(UIColor *)color count:(int)count;

+ (double)distance:(UIColor *)colorA
         fromColor:(UIColor *)colorB;

+ (double)distance:(UIColor *)colorA
         fromColor:(UIColor *)colorB
             asHSV:(BOOL)asHSV
       coefficient:(CGFloat[3])coefficient;

+ (double)perceptiveDistance:(UIColor *)colorA
                   fromColor:(UIColor *)colorB;
@end
