//
//  MessageTableCell.h
//  Telegram P-Edition
//
//  Created by Dmitry Kondratyev on 1/26/14.
//  Copyright (c) 2014 keepcoder. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MessageTableItem.h"
#import "TMElements.h"
#import "MessagesViewController.h"

@interface MessageTableCell : NSView

@property (nonatomic, strong) MessageTableItem *item;
@property (nonatomic, strong) MessagesViewController *messagesViewController;

- (void)setHover:(BOOL)isHover redraw:(BOOL)redraw;
- (void)setItem:(MessageTableItem *)item;
- (void)resizeAndRedraw;

@end
