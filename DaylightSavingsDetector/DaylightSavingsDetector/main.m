//
//  main.m
//  DaylightSavingsDetector
//
//  Created by Joseph Priest on 10/31/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//
//  Whats interesting about this program is how it demostrates how to call a class method and how to call
//  an instance method. The *time variable is a class method while the *answer variable is filled with the
//  product of a instance method of the instance time.
//
//
#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSTimeZone *time = [NSTimeZone systemTimeZone];
        bool answer = [time isDaylightSavingTime];
        NSLog(@"Survey says...%", answer);
       // NSDate *now = [[NSDate alloc] init];
        
    }
    return 0;
}

