#import <UserNotifications/UserNotifications.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0), macos(10.14), watchos(6.0)) API_UNAVAILABLE(tvos)
@interface MPNotificationServiceExtension: UNNotificationServiceExtension

- (void)didReceiveNotificationRequest:(UNNotificationRequest *)request withContentHandler:(void (^)(UNNotificationContent *Nonnull))contentHandler;

@end

NS_ASSUME_NONNULL_END
