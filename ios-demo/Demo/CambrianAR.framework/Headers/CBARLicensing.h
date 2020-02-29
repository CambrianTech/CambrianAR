//
//  CBARLicensing.h
//  Cambrian
//
//  Created by Joel Teply on 11/3/13.
//
//

#import <Foundation/Foundation.h>
#import <UIKIt/UIKit.h>

@interface CBARLicensing : NSObject
    + (void)enableWithKey:(NSString *)apiKey;
    + (BOOL)isEnabled;
@end
