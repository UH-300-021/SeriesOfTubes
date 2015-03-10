//
//  RISEMessage.h
//  RISE-Talk
//
//  Created by Greyson Wright on 2/16/15.
//  Copyright (c) 2015 Matthew York. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RISEArchivable.h"
#import "RISEUser.h"
#import "RISEChild.h"

@interface RISEMessage : RISEArchivable

@property NSString *title;
@property NSString *mimeType;
@property NSString *data;
@property BOOL read;
@property RISEUser *sender;
@property NSArray *receivers;
@property NSArray *children;

@end
