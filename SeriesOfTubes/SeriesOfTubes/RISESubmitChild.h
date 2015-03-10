//
//  RISESubmitChild.h
//  RISE-Talk
//
//  Created by Greyson Wright on 2/24/15.
//  Copyright (c) 2015 Matthew York. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RISEChild.h"

@interface RISESubmitChild : RISEArchivable

@property NSArray *parents;
@property NSArray *teachers;
@property NSString *firstName;
@property NSString *lastName;
@property NSString *notes;

@end
