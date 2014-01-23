//
//  LPtNode.h
//  mylist003
//
//  Created by apple on 14-1-22.
//  Copyright (c) 2014年 avd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CGPointEx.h"


@interface LPtNode  : NSObject{
    

};

@property(nonatomic,strong) CGPointEx *obj;
@property(nonatomic,strong) LPtNode *next;
@property(nonatomic,strong) LPtNode *prev;
@end