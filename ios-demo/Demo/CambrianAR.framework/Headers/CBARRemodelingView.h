//
//  CBARRemodelingView.h
//  CambrianAR
//
//  Created by Joel Teply on 3/3/17.
//  Copyright © 2017 Joel Teply. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CBARAugmentedView.h"
#import "CBARRemodelingTypes.h"
#import "CBARRemodelingScene.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CBARRemodelingViewDelegate <NSObject>
@optional

- (void) historyChanged:(CBARUndoChange)change assetID:(NSString *)assetID userData:(NSDictionary<NSString*, NSString*> *)userData forward:(BOOL)forward;
- (void) toolVisibilityChanged:(BOOL)visible;

@end

@interface CBARRemodelingView : CBARAugmentedView

@property (weak, nonatomic, nullable) id<CBARRemodelingViewDelegate> delegate;

@property (nonatomic, strong, nonnull) CBARRemodelingScene *scene;


@end

NS_ASSUME_NONNULL_END
