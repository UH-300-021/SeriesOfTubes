//
//  RISESubmitMessage.m
//  RISE-Talk
//
//  Created by Greyson Wright on 2/16/15.
//  Copyright (c) 2015 Matthew York. All rights reserved.
//

#import "RISESubmitMessage.h"

@implementation RISESubmitMessage

-(id)init {
    self = [super init];
    if (self) {
        [self setValue:@"NSNumber" forKeyPath:@"propertyArrayMap.childrenIds"];
    }
    return self;
}

@end
