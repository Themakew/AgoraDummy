//
//  EMMsgAudioBubbleView.h
//  EaseChat
//
//  Created by XieYajie on 2019/2/14.
//  Copyright © 2019 XieYajie. All rights reserved.
//

#import "EaseChatMessageBubbleView.h"
#import "EaseHeaders.h"

NS_ASSUME_NONNULL_BEGIN

@interface EMMsgAudioBubbleView : EaseChatMessageBubbleView

@property (nonatomic, strong) UILabel *textLabel;

@property (nonatomic, strong) UIImageView *imgView;

@property (nonatomic, strong) UIView *placeholderView;

@end

NS_ASSUME_NONNULL_END
