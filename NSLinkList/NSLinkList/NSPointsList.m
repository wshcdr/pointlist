//
//  NSPointsList.m
//  mylist002
//
//  Created by apple on 14-1-21.
//  Copyright (c) 2014年      . All rights reserved.
//

#import "NSPointsList.h"

LPtNode * LPtNodeMake(CGPointEx* obj, LPtNode *next, LPtNode *prev){
    LPtNode *n = [[LPtNode alloc] init];
    
    n.next = next;
    n.prev = prev;
    n.obj = obj;
    return n;
};

@implementation NSPointsList

@synthesize first;
@synthesize last;

- (id)init{
    if ((self = [super init]) == nil) return nil;
    
    first = last = nil;
    size = 0;
    
    return self;
}

- (void)pushBack:(CGPointEx*)pt {
    
    if (pt == nil) return;
    
    LPtNode *n = LPtNodeMake(pt, nil, last);
    
    if (size == 0) {
        first = last = n;
    } else {
        last.next = n;
        last = n;
    }
    
    size++;
    
}

- (int)size   { return size; }                             

- (CGPointEx*)getPt:(const int)idx{
    int tmpidx = idx;
    
    
    if (idx >= size || idx < 0) return nil;
    
    LPtNode *node = nil;
    
    if (idx > (size / 2)) {
        // loop from the back
        int curridx = size - 1;
        for (node = last; idx < curridx; --curridx) node = node.prev;
        return node.obj;
    } else {
        // loop from the front
        int curridx = 0;
        if (idx == 0) {
            return first.obj;
        }
        for (node = first; curridx < idx; ++curridx)
            node = node.next;
        return node.obj;
    }
    
    return nil;
}
@end

