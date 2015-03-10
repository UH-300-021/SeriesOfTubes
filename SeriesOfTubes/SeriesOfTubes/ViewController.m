//
//  ViewController.m
//  SeriesOfTubes
//
//  Created by UH 300 -21 on 3/10/15.
//  Copyright (c) 2015 UH 300 -21. All rights reserved.
//

#import "ViewController.h"
#import "RISEDtos.h"
#import "NSObject+ObjectMap.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    NSString *body = @"{\"username\": \"myork@cs.ua.edu\",\"password\": \"NewPass#\",\"deviceIdentifier\": \"sample string 3\",\"deviceType\": \"sample string 4\"}";
    
    //Defining the request
    NSMutableURLRequest *request = [[NSMutableURLRequest alloc] initWithURL:[NSURL URLWithString:@"https://mobileweb.caps.ua.edu/RISE-Talk/api/login"]];
    request.HTTPMethod = @"POST";
    request.HTTPBody = [body dataUsingEncoding:NSUTF8StringEncoding];
    [request addValue:@"application/json" forHTTPHeaderField:@"Content-Type"];
    
    //Create connection we will use to MAKE request
    NSURLConnection *connection = [[NSURLConnection alloc] initWithRequest:request delegate:self];
    
    //Make request
    [connection start];
}

-(void)connection:(NSURLConnection *)connection didReceiveData:(NSData *)data {
    RISELoginResponse *response = [[RISELoginResponse alloc] initWithJSONData:data];
    
    NSLog(@"%@ %@", response.user.firstName, response.user.lastName);
    //NSLog(@"%@", [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding]);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
