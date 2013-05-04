//
//  CMNavBarNotificationView.h
//  Moped
//
//  Modified by Eduardo Pinho on 1/12/13.
//  Created by Engin Kurutepe on 1/4/13.
//  Copyright (c) 2013 Codeminer42 All rights reserved.
//  Copyright (c) 2013 Moped Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString *kCMNavBarNotificationViewTapReceivedNotification;
extern NSString *kCMNavBarNotificationViewIgnoredReceivedNotification;

typedef void (^CMNotificationSimpleAction)(id);
@protocol CMNavBarNotificationViewDelegate;
@class OBGradientView;
@interface CMNavBarNotificationView : UIView

@property (nonatomic, strong) UILabel *textLabel;
@property (nonatomic, strong) UILabel *detailTextLabel;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, assign) id<CMNavBarNotificationViewDelegate> delegate;
@property (nonatomic, strong) UIView * contentView;

@property (nonatomic) NSTimeInterval duration;

+ (CMNavBarNotificationView *) notifyWithText:(NSString*)text
									   detail:(NSString*)detail
										image:(UIImage*)image
									 duration:(NSTimeInterval)duration;

+ (CMNavBarNotificationView *) notifyWithText:(NSString*)text
									   detail:(NSString*)detail
									 duration:(NSTimeInterval)duration;

+ (CMNavBarNotificationView *) notifyWithText:(NSString*)text
									   detail:(NSString*)detail;

+ (CMNavBarNotificationView *) notifyWithText:(NSString*)text
									   detail:(NSString*)detail
										image:(UIImage*)image
									 duration:(NSTimeInterval)duration
								   touchBlock:(CMNotificationSimpleAction)block;

+ (CMNavBarNotificationView *) notifyWithText:(NSString*)text
									   detail:(NSString*)detail
									 duration:(NSTimeInterval)duration
								   touchBlock:(CMNotificationSimpleAction)block;

+ (CMNavBarNotificationView *) notifyWithText:(NSString*)text
									   detail:(NSString*)detail
								   touchBlock:(CMNotificationSimpleAction)block;

+ (CMNavBarNotificationView *) notifyWithText:(NSString*)text
									   detail:(NSString*)detail
										image:(UIImage*)image
									 duration:(NSTimeInterval)duration
								  ignoreBlock:(CMNotificationSimpleAction)ignoreBlock;

+ (CMNavBarNotificationView *) notifyWithText:(NSString*)text
									   detail:(NSString*)detail
									 duration:(NSTimeInterval)duration
								  ignoreBlock:(CMNotificationSimpleAction)ignoreBlock;

+ (CMNavBarNotificationView *) notifyWithText:(NSString*)text
									   detail:(NSString*)detail
								  ignoreBlock:(CMNotificationSimpleAction)ignoreBlock;

+ (CMNavBarNotificationView *) notifyWithText:(NSString*)text
									   detail:(NSString*)detail
										image:(UIImage*)image
									 duration:(NSTimeInterval)duration
								   touchBlock:(CMNotificationSimpleAction)block
								  ignoreBlock:(CMNotificationSimpleAction)ignoreBlock;

+ (CMNavBarNotificationView *) notifyWithText:(NSString*)text
									   detail:(NSString*)detail
									 duration:(NSTimeInterval)duration
								   touchBlock:(CMNotificationSimpleAction)block
								  ignoreBlock:(CMNotificationSimpleAction)ignoreBlock;

+ (CMNavBarNotificationView *) notifyWithText:(NSString*)text
									   detail:(NSString*)detail
								   touchBlock:(CMNotificationSimpleAction)block
								  ignoreBlock:(CMNotificationSimpleAction)ignoreBlock;

+ (void) setBackgroundImage:(UIImage *)image;
- (void) setBackgroundColor:(UIColor *)color;

@end

@protocol CMNavBarNotificationViewDelegate <NSObject>

@optional
- (void)didTapOnNotificationView:(CMNavBarNotificationView *)notificationView;
- (void)didIgnoreNotification:(CMNavBarNotificationView*)notificationView;

@end
