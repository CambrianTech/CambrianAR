//
//  CBARRemodelingScene.h
//  CambrianAR
//
//  Created by Joel Teply on 3/3/17.
//  Copyright © 2017 Joel Teply. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CBARAugmentedScene.h"

#import "CBARRemodelingPaint.h"
#import "CBARRemodelingFloor.h"

NS_ASSUME_NONNULL_BEGIN

@interface CBARRemodelingScene : CBARAugmentedScene

@property (strong, nonatomic, nullable) CBARRemodelingPaint *selectedPaint;
@property (strong, nonatomic, nullable) CBARRemodelingFloor *selectedFloor;

@property (readonly, nonatomic) BOOL isMasked;

@end

NS_ASSUME_NONNULL_END
