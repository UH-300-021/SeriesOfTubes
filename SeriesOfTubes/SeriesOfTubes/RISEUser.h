//
//  RISEBaseUser.h
//  RISE-Talk
//
//  Created by Greyson Wright on 2/16/15.
//  Copyright (c) 2015 Matthew York. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RISEArchivable.h"

@interface RISEUser : RISEArchivable

@property NSString *firstName;
@property NSString *lastName;
@property NSString *middleName;
@property NSString *email;
@property NSString *homePhone;
@property NSString *cellPhone;
@property NSString *role;

@end
