/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSensorRecorder : NSObject

+ (bool)isAccelerometerRecordingAvailable;
+ (bool)isAuthorizedForRecording;

- (id)accelerometerDataFrom:(id)arg1 to:(id)arg2;
- (id)accelerometerDataFromDate:(id)arg1 toDate:(id)arg2;
- (id)accelerometerDataSince:(unsigned long long)arg1;
- (id)accelerometerDataSinceId:(unsigned long long)arg1;
- (void)recordAccelerometerFor:(double)arg1;
- (void)recordAccelerometerForDuration:(double)arg1;

@end