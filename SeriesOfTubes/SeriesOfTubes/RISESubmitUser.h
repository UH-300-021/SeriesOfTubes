//
//  RISESubmitUser.h
//  RISE-Talk
//
//  Created by Niklas Fahl on 2/26/15.
//  Copyright (c) 2015 Matthew York. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RISEArchivable.h"

@interface RISESubmitUser : RISEArchivable

@property NSString *firstName;
@property NSString *lastName;
@property NSString *middleName;
@property NSString *email;
@property NSString *homePhone;
@property NSString *cellPhone;
@property NSString *role;
@property NSString *password;

@end
