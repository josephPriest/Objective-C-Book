//
//  main.m
//  TimeAfterTime
//
//  Created by Joseph Priest on 10/31/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSDate *now = [NSDate date];
        NSLog(@"The new date is %@", now);
        double seconds = [now timeIntervalSince1970];
        NSLog(@"It has been %f seconds since the start of 1970.", seconds);
        NSDate *later = [now dateByAddingTimeInterval:100000];
        NSLog(@"In 1000,000 seconds it will be %@", later);
        NSCalendar *cal = [NSCalendar currentCalendar];
        NSUInteger day = [cal ordinalityOfUnit:NSDayCalendarUnit
                                        inUnit:NSMonthCalendarUnit
                                       forDate:now];
        NSLog(@"This is day %lu of the month", day); 
        
    }
    return 0;
}

