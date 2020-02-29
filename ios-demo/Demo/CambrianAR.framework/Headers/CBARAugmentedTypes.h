//
//  CBARAugmentedTypes.h
//  CambrianAR
//
//  Created by Joel Teply on 3/5/17.
//  Copyright © 2017 Joel Teply. All rights reserved.
//

#ifndef CBARAugmentedTypes_h
#define CBARAugmentedTypes_h

typedef NS_ENUM(NSInteger, CBARToolMode) {
    CBARToolModeNone = 0,
    CBARToolModeSelect,
    CBARToolModeMove,
    CBARToolModeFill,
    CBARToolModeUnfill,
    CBARToolModePaintbrush,
    CBARToolModeEraser,
    CBARToolModeFindColor,
    CBARToolModeRectangle,
};

typedef NS_ENUM(NSInteger, CBAssetType) {
    CBAssetTypeAll,
    CBAssetTypePaint,
    CBAssetTypeFloor,
    CBAssetTypeModel,
};

typedef NS_ENUM(NSInteger, CBARLightingType) {
    CBARLightingTypeNone,
    CBARLightingTypeIncandescent,
    CBARLightingTypeFluorescent,
    CBARLightingTypeLEDWhite,
    CBARLightingTypeLEDWarm,
    CBARLightingTypeDaylightMorning,
    CBARLightingTypeDaylight,
    CBARLightingTypeDaylightEvening,
    CBARLightingTypeDaylightOvercast,
};

#endif /* CBARAugmentedTypes_h */
