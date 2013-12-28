//
//  main.m
//  DateList
//
//  Created by Joseph Priest on 10/31/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        //Create three NSDate objects
        NSDate *now = [NSDate date];
        NSDate *tomorrow = [now dateByAddingTimeInterval:24.0 *60 *60];
        NSDate *yesterday = [now dateByAddingTimeInterval:-24 * 60 * 60];
        
        //create an array containing all three (nil terminates the list)
        NSArray *dateList = [NSArray arrayWithObjects:now, tomorrow, yesterday, Nil];
        //How many dates are there?
        NSLog(@"There are %lu dates", [dateList count]);
        
        //Print couple
        for(NSDate *d in dateList){
            NSLog(@"Here is a date: %@", d);
        }
        
        
    }
    return 0;
}

