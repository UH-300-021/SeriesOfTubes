//
//  RISELoginRequest.h
//  RISE-Talk
//
//  Created by Greyson Wright on 2/16/15.
//  Copyright (c) 2015 Matthew York. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RISELoginRequest : NSObject

@property NSString *username;
@property NSString *password;
@property NSString *deviceIdentifier;
@property NSString *deviceType;

@end
