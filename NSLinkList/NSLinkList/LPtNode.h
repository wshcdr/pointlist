//
//  LPtNode.h
//  mylist003
//
//  Created by test on 14-1-22.
//  Copyright (c) 2014年      . All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CGPointEx.h"


@interface LPtNode  : NSObject{
    

};

@property(nonatomic,strong) CGPointEx *obj;
@property(nonatomic,strong) LPtNode *next;
@property(nonatomic,strong) LPtNode *prev;
@end