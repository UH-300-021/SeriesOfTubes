//
//  RISELoginResponse.h
//  RISE-Talk
//
//  Created by Greyson Wright on 2/16/15.
//  Copyright (c) 2015 Matthew York. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RISEUser.h"
#import "RISEAccessToken.h"

@interface RISELoginResponse : NSObject

@property RISEAccessToken *accessToken;
@property RISEUser *user;

@end
