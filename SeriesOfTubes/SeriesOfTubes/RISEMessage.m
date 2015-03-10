//
//  RISEMessage.m
//  RISE-Talk
//
//  Created by Greyson Wright on 2/16/15.
//  Copyright (c) 2015 Matthew York. All rights reserved.
//

#import "RISEMessage.h"

@implementation RISEMessage

-(id)init {
    self = [super init];
    if (self) {
        [self setValue:@"RISEChild" forKeyPath:@"propertyArrayMap.children"];
        [self setValue:@"RISEUser" forKeyPath:@"propertyArrayMap.receivers"];
    }
    return self;
}

@end
