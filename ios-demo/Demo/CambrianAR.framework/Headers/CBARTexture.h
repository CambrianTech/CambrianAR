//
//  CBARTexture.h
//  HomeAugmentation
//
//  Created by Joel Teply on 11/7/16.
//  Copyright © 2016 Joel Teply. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GLKit/GLKit.h>

@interface CBARMaterial : NSObject
    @property (nonatomic, assign) GLKVector3 AmbientColor;
    @property (nonatomic, assign) GLKVector3 DiffuseColor;
    @property (nonatomic, assign) GLKVector3 SpecularColor;
    @property (nonatomic, assign) float Shininess;

@end

@interface CBARTexture : NSObject
    @property (nonatomic, strong) NSString* path;
    @property (nonatomic, assign) float scale;
    @property (nonatomic, strong) CBARMaterial *material;
@end
