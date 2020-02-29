//
//  CBDefines.h
//  HomeAugmentationFramework
//
//  Created by Joel Teply on 6/9/14.
//  Copyright (c) 2014 Joel Teply. All rights reserved.
//

#if DEBUG

#else

#define NSLog(format,...)

#endif

#define START_TIMER(label) NSString *timeLogLabel=label; NSTimeInterval startTime = [NSDate timeIntervalSinceReferenceDate]; NSTimeInterval lastTime = startTime; NSLog(@"%@ STARTED", timeLogLabel);
#define LOG_TIMER_POINT(label) NSLog(@"%@.%@ took %f, total: %f seconds", timeLogLabel, label,  ([NSDate timeIntervalSinceReferenceDate] - lastTime), ([NSDate timeIntervalSinceReferenceDate] - startTime)); lastTime = [NSDate timeIntervalSinceReferenceDate];
#define LOG_TIMER LOG_TIMER_POINT(@"")

#define RESAMPLE_OVERLAY 1

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)

#define HAS_CAMERA ([UIImagePickerController isCameraDeviceAvailable:UIImagePickerControllerSourceTypeCamera])