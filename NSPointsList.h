//
//  NSPointsList.h
//  mylist002
//
//  Created by apple on 14-1-21.
//  Copyright (c) 2014年 dyd. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef struct LPtNode LPtNode;

struct LPtNode {
    __unsafe_unretained CGPoint *obj;
    LPtNode *next;
    LPtNode *prev;
};


@interface NSPointsList : NSObject{
    
    LPtNode *first;
    LPtNode *last;
    
    unsigned int size;
    
}

- (id)init;                                 // init an empty list
- (void)pushBack:(CGPoint*)anObject;              // add an object to back of list
- (int)size;                                // how many objects are stored

@property (readonly) LPtNode *first;
@property (readonly) LPtNode *last;

@end

LPtNode * LPtNodeMake(CGPoint* obj, LPtNode *next, LPtNode *prev);