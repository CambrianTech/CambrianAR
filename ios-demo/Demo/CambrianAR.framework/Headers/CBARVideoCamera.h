//
//  CBARVideoCamera.h
//  Cambrian
//
//  Created by Joel Teply on 10/19/12.
//
//

#import <GLKit/GLKit.h>
#import <CoreMedia/CoreMedia.h>
#import <AVFoundation/AVFoundation.h>

@protocol CBARVideoCameraDelegate
- (void) sendFrame:(CVPixelBufferRef)pixelBuffer;
@end

@interface CBARVideoCamera : NSObject

@property (nonatomic, assign) BOOL isRunning;
@property (nonatomic, assign) BOOL isPaused;
@property (readonly) AVCaptureDevice *inputCamera;

- (id) init:(id <CBARVideoCameraDelegate>)delegate;

- (BOOL)startRunning;
- (BOOL)stopRunning;

- (void)pause;
- (void)resume;

- (BOOL)setExposureMode:(AVCaptureExposureMode)exposureMode;
- (BOOL)exposeAtPoint:(CGPoint)point
      useAutoExposure:(BOOL)useAutoExposure;

@end
