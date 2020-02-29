//
//  CBARAugmentedView.h
//  CambrianAR
//
//  Created by Joel Teply on 11/17/15.
//  Copyright © 2015 Joel Teply. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
#import "CBARAugmentedScene.h"

@class CBARTexture;

NS_ASSUME_NONNULL_BEGIN

@interface CBARAugmentedView : UIView

@property (nonatomic, strong, nullable) CBARAugmentedScene *scene;

@property (nonatomic, assign) CBARToolMode toolMode;

@property (nonatomic, readonly) BOOL isRunning;

@property (nonatomic, readonly) BOOL isLive;
@property (nonatomic, assign) BOOL isAREnabled;

+ (CBARAugmentedView *) getInstance;

- (void) captureCurrentState;

- (void) getImagePreview:(void (^)(UIImage *preview))callback;

- (BOOL) startRunning;
- (BOOL) stopRunning;

- (void) clearAll;

@property (nonatomic, readonly) int undoSize;
- (void) undo;

@property (nonatomic, readonly) int redoSize;
- (void) redo;

- (void) commitToolChanges;

- (void) showHideTools:(BOOL)show;

@end

NS_ASSUME_NONNULL_END
