//
//  RISESubmitMessage.h
//  RISE-Talk
//
//  Created by Greyson Wright on 2/16/15.
//  Copyright (c) 2015 Matthew York. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RISESubmitMessage : NSObject

@property NSString *title;
@property NSString *mimeType;
@property NSString *data;
@property NSArray *childrenIds;

@end
