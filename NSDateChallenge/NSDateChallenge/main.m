//
//  main.m
//  NSDateChallenge
//
//  Created by Joseph Priest on 10/31/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//
//  This program is to demonstrate how to create objects and send messages to one another
//  
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        NSDate *now = [NSDate date];
        NSDateComponents *comps = [[NSDateComponents alloc] init];
        
        [comps setYear:1990];
        [comps setMonth:7];
        [comps setDay:13];
        [comps setHour:10];
        [comps setMinute:10];
        [comps setSecond:0];
        NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSGregorianCalendar];
                         NSDate *dateOfBirth = [g dateFromComponents: comps];
        
        
                         double d = [now timeIntervalSinceDate:dateOfBirth];
                         
                         NSLog(@"The time since your birthday has been %@", d);
    }
    
    return 0;
}

