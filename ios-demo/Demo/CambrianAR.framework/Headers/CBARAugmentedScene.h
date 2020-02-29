//
//  CBARAugmentedScene.m
//  CambrianAR
//
//  Created by Joel Teply on 3/3/17.
//  Copyright © 2017 Joel Teply. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CBARAugmentedTypes.h"
#import "CBARAugmentedAsset.h"

NS_ASSUME_NONNULL_BEGIN

@interface CBARAugmentedScene : NSObject

@property (readonly, nonatomic, nonnull) NSString *sceneID;
@property (readonly, nonatomic, nonnull) NSDictionary<NSString *, CBARAugmentedAsset *> *assets;
@property (readonly, nonatomic, nonnull) NSMutableDictionary<NSString *, NSString *> *userData;

@property (strong, nonatomic, nullable) CBARAugmentedAsset *selectedAsset;
@property (strong, nonatomic, nullable) NSString *selectedAssetID;
@property (nonatomic, assign) CBARLightingType lightingAdjustment;


- (nullable CBARAugmentedScene *) initWithSceneID:(nonnull NSString*)sceneID;

- (nullable CBARAugmentedScene *) initWithUIImage:(nonnull UIImage *)image;
- (nullable CBARAugmentedScene *) initWithUIImage:(nonnull UIImage *)image sceneID:(nonnull NSString*)sceneID;

- (nullable CBARAugmentedScene *) initWithPath:(nonnull NSString *)path;

+ (nullable UIImage *)getOriginal:(NSString *)path;
+ (nullable UIImage *)getPreview:(NSString *)path;
+ (nullable UIImage *)getThumbnail:(NSString *)path;
+ (nullable UIImage *)getBeforeAfter:(NSString *)imagePath isHorizontal:(BOOL)isHorizontal;

- (NSDictionary<NSString *, CBARAugmentedAsset *>*)getAssets:(CBAssetType)type;

- (NSString *) saveToDirectory:(nonnull NSString *)path compressed:(BOOL)compress;

- (BOOL) appendAsset:(nonnull CBARAugmentedAsset *)asset;

- (BOOL) removeAsset:(nonnull NSString *)assetID;

@end

NS_ASSUME_NONNULL_END
