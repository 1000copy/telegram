//
//  TGUpdateContainer.m
//  Messenger for Telegram
//
//  Created by keepcoder on 28.02.14.
//  Copyright (c) 2014 keepcoder. All rights reserved.
//

#import "TGUpdateContainer.h"

@implementation TGUpdateContainer

-(id)initWithSequence:(int)seq pts:(int)pts date:(int)date qts:(int)qts update:(id)update {
    if(self = [super init]) {
        self.beginSeq = seq;
        self.pts = pts;
        self.date = date;
        self.qts = qts;
        self.update = update;
    }
    return self;
}

@end
