//
//  JCPriorityQueue.h
//
//  Created by Jesse Collis on 10/10/11.
//  Copyright (c) 2012, Jesse Collis JC Multimedia Design. <jesse@jcmultimedia.com.au>
//  All rights reserved.
//
//  * Redistribution and use in source and binary forms, with or without 
//   modification, are permitted provided that the following conditions are met:
//
//  * Redistributions of source code must retain the above copyright 
//   notice, this list of conditions and the following disclaimer.
//
//  * Redistributions in binary form must reproduce the above copyright 
//   notice, this list of conditions and the following disclaimer in the 
//   documentation and/or other materials provided with the distribution.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
//  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
//  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY 
//  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
//  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
//  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND 
//  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
//  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
//  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE
//

#import <Foundation/Foundation.h>

@protocol JCPriorityQueueObject <NSObject>
- (NSInteger)cost;
@end

@interface JCPriorityQueueHeaderNode : NSObject <JCPriorityQueueObject>
@end

typedef BOOL (^JCPriorityQueueObjectComparisonBlock)(id<JCPriorityQueueObject> other);

@interface JCPriorityQueue : NSObject

- (void)addObject:(id<JCPriorityQueueObject>)object;
- (id<JCPriorityQueueObject>)pop;
- (void)resort:(id<JCPriorityQueueObject>)object;

- (BOOL)containsObject:(id<JCPriorityQueueObject>)object;
- (id<JCPriorityQueueObject>)findObjectWithBlock:(JCPriorityQueueObjectComparisonBlock)compare;
- (id<JCPriorityQueueObject>)findObject:(id<JCPriorityQueueObject>)object;

- (id<JCPriorityQueueObject>)first;
- (NSUInteger)count;
- (void)clear;

@end
