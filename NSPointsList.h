//
//  NSPointsList.h
//  mylist002
//
//  Created by apple on 14-1-21.
//  Copyright (c) 2014年 dyd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CGPointEx.h"
#import "LPtNode.h"



@interface NSPointsList : NSObject{
    
    LPtNode *first;
    LPtNode *last;
    
    unsigned int size;
    
}

- (id)init;                                 // init an empty list
- (void)pushBackex:(CGPointEx*)anObject;              // add an object to back of list
- (int)sizeex;                                // how many objects are stored
- (CGPointEx*)getPt:(const int)idx;

@property (nonatomic, strong) LPtNode *first;
@property (nonatomic, strong) LPtNode *last;

@end

LPtNode * LPtNodeMake(CGPointEx* obj, LPtNode *next, LPtNode *prev);