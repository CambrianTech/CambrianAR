//
//  CBARAugmentedAsset.h
//  CambrianAR
//
//  Created by Joel Teply on 3/3/17.
//  Copyright © 2017 Joel Teply. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CBARAugmentedTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface CBARAugmentedAsset : NSObject

@property (readonly, nonatomic) CBAssetType assetType;
@property (strong, nonatomic, nonnull, readonly) NSString *assetID;
@property (strong, nonatomic) UIImage *preview;
@property (readonly, nonatomic) UIImage *thumbnail;

- (nullable NSString *) getUserData:(NSString *)key;

- (void) setUserData:(NSString *)key value:(NSString *)value;

- (nonnull CBARAugmentedAsset *) initWithAssetID:(NSString *)assetID;

@end

NS_ASSUME_NONNULL_END
