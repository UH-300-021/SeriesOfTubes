//
//  RISESubmitChild.m
//  RISE-Talk
//
//  Created by Greyson Wright on 2/24/15.
//  Copyright (c) 2015 Matthew York. All rights reserved.
//

#import "RISESubmitChild.h"

@implementation RISESubmitChild

-(id)init {
	self = [super init];
	if (self) {
		[self setValue:@"RISEUser" forKeyPath:@"propertyArrayMap.parents"];
		[self setValue:@"RISEUser" forKeyPath:@"propertyArrayMap.teachers"];
	}
	return self;
}

@end
