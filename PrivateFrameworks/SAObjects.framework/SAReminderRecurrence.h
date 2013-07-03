/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAReminderRecurrence : AceObject <SAAceSerializable> {
}

@property(copy) NSArray * daysOfTheMonth;
@property(copy) NSArray * daysOfTheWeek;
@property(copy) NSArray * daysOfTheYear;
@property(copy) NSString * frequencyTimeUnit;
@property int interval;
@property(copy) NSArray * monthsOfTheYear;
@property(copy) NSArray * weeksOfTheYear;

+ (id)recurrenceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)recurrence;

- (void)setFrequencyTimeUnit:(id)arg1;
- (id)frequencyTimeUnit;
- (id)encodedClassName;
- (id)weeksOfTheYear;
- (id)daysOfTheYear;
- (id)monthsOfTheYear;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (void)setWeeksOfTheYear:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (int)interval;
- (void)setInterval:(int)arg1;
- (id)groupIdentifier;

@end