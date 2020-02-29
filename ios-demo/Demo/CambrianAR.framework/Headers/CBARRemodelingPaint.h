//
//  CBARRemodelingPaint.h
//  CambrianAR
//
//  Created by Joel Teply on 3/3/17.
//  Copyright © 2017 Joel Teply. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CBARAugmentedAsset.h"
#import "CBARRemodelingTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface CBARRemodelingPaint : CBARAugmentedAsset

@property (nonatomic, assign) CBARPaintSheen sheen;
@property (nonatomic, strong, nonnull) UIColor* color;

@end

NS_ASSUME_NONNULL_END
