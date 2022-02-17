//
//  EchatMessageBoxController.h
//  EchatPlatformSDK
//
//  Created by mac on 2020/9/9.
//  Copyright © 2020 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Echat_accessConditions;
@class EchatChatController;

NS_ASSUME_NONNULL_BEGIN

typedef EchatChatController *_Nonnull(^Echat_PushToChatControllerCallback)(Echat_accessConditions * condition);

@interface EchatMessageBoxController : UIViewController

@property (nonatomic, copy) Echat_PushToChatControllerCallback  pushToChatControllerCallback;

//返回方法
- (void)back;

@end

NS_ASSUME_NONNULL_END
