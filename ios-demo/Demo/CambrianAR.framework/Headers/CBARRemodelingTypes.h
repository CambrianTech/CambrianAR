//
//  CBARRemodelingTypes.h
//  CambrianAR
//
//  Created by Joel Teply on 3/3/17.
//  Copyright © 2017 Joel Teply. All rights reserved.
//

#ifndef CBARRemodelingTypes_h
#define CBARRemodelingTypes_h

typedef NS_ENUM(NSInteger, CBARPaintSheen) {
    CBARPaintSheenFlat,
    CBARPaintSheenMatte,
    CBARPaintSheenEggshell,
    CBARPaintSheenSatin,
    CBARPaintSheenSemiGloss,
    CBARPaintSheenHighGloss,
};

typedef NS_ENUM(NSInteger, CBARLighting) {
    CBARLightingNoAdjustment,
    CBARLightingIncandescent,
    CBARLightingLEDWarm,
    CBARLightingLEDWhite,
    CBARLightingFluorescent,
};

typedef NS_ENUM(NSInteger, CBARUndoChange) {
    CBARUndoChangePaintColor,
    CBARUndoChangePaintSheen,
    CBARUndoChangeMask,
};

#endif /* CBARRemodelingTypes_h */
