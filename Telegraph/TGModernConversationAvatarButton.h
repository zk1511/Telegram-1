/*
 * This is the source code of Telegram for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import <UIKit/UIKit.h>

@class TGPresentation;

@interface TGModernConversationAvatarButton : UIButton

@property (nonatomic, readonly) NSString *avatarUrl;
@property (nonatomic, assign) bool preview;

- (void)setOrientation:(UIInterfaceOrientation)orientation;

- (void)setAvatarConversationId:(int64_t)avatarConversationId;
- (void)setAvatarTitle:(NSString *)avatarTitle;

- (void)setAvatarConversationIds:(NSArray *)avatarConversationIds;
- (void)setAvatarTitles:(NSArray *)avatarTitles;

- (void)setAvatarIcon:(UIImage *)avatarIcon;
- (void)setAvatarFirstName:(NSString *)firstName lastName:(NSString *)lastName;

- (void)setAvatarUrl:(NSString *)url;
- (void)setAvatarUrls:(NSArray *)urls;

@end
