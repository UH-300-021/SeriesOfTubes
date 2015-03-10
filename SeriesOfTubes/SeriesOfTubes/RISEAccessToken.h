//
//  RISEAccessToken.h
//  RISE-Talk
//
//  Created by Greyson Wright on 2/16/15.
//  Copyright (c) 2015 Matthew York. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RISEAccessToken : NSObject

@property NSString *token;
@property NSDate *expirationDate;

@end
