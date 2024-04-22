/************************************************************
  *  * AgoraChat CONFIDENTIAL 
  * __________________ 
  * Copyright (C) 2016 AgoraChat Inc. All rights reserved. 
  *  
  * NOTICE: All information contained herein is, and remains 
  * the property of AgoraChat Inc.
  * Dissemination of this information or reproduction of this material 
  * is strictly forbidden unless prior written permission is obtained
  * from AgoraChat Inc.
  */

#import <UIKit/UIKit.h>

@interface EaseTextView : UITextView
{
    UIColor *_contentColor;
    BOOL _editing;
}

@property(strong, nonatomic) NSString *placeholder;
@property(strong, nonatomic) UIColor *placeholderColor;

@end
