//
//  NSPointsList.m
//  mylist002
//
//  Created by apple on 14-1-21.
//  Copyright (c) 2014年 dyd. All rights reserved.
//

#import "NSPointsList.h"

@implementation NSPointsList

- (id)init{
    if ((self = [super init]) == nil) return nil;
    
    first = last = nil;
    size = 0;
    
    return self;
}

- (void)pushBack:(CGPoint*)pt {
    
    if (pt == nil) return;
    
    LPtNode *n = LPtNodeMake(pt, nil, last);
    
    if (size == 0) {
        first = last = n;
    } else {
        last->next = n;
        last = n;
    }
    
    size++;
    
}

- (int)size   { return size; }                             

@end

LPtNode * LPtNodeMake(CGPoint* obj, LPtNode *next, LPtNode *prev){
    LPtNode *n = malloc(sizeof(LPtNode));
    n->next = next;
    n->prev = prev;
    n->obj = obj;
    return n;
};