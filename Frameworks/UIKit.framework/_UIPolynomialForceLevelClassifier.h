/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPolynomialForceLevelClassifier : _UIForceLevelClassifier {
    double  _currentForce;
    struct _UIForceLevelInfo { 
        long long identifier; 
        double center; 
        double minimum; 
        double maximum; 
        double attractionStrength; 
        long long attractionSharpness; 
        double attractionSlope; 
    }  _standardLevel;
    struct _UIForceLevelInfo { 
        long long identifier; 
        double center; 
        double minimum; 
        double maximum; 
        double attractionStrength; 
        long long attractionSharpness; 
        double attractionSlope; 
    }  _strongLevel;
}

@property (nonatomic) struct _UIForceLevelInfo { long long x1; double x2; double x3; double x4; double x5; long long x6; double x7; } standardLevel;
@property (nonatomic) struct _UIForceLevelInfo { long long x1; double x2; double x3; double x4; double x5; long long x6; double x7; } strongLevel;

- (long long)_forceLevelForValue:(double)arg1;
- (long long)currentForceLevel;
- (id)description;
- (id)init;
- (void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)reset;
- (void)setStandardLevel:(struct _UIForceLevelInfo { long long x1; double x2; double x3; double x4; double x5; long long x6; double x7; })arg1;
- (void)setStrongLevel:(struct _UIForceLevelInfo { long long x1; double x2; double x3; double x4; double x5; long long x6; double x7; })arg1;
- (struct _UIForceLevelInfo { long long x1; double x2; double x3; double x4; double x5; long long x6; double x7; })standardLevel;
- (struct _UIForceLevelInfo { long long x1; double x2; double x3; double x4; double x5; long long x6; double x7; })strongLevel;

@end