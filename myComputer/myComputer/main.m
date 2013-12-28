//
//  main.m
//  myComputer
//
//  Created by Joseph Priest on 11/23/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSHost *this = [NSHost currentHost];
        
        NSString *nameOfMine = [this localizedName];
        NSLog(@"The name of my computer is %@", nameOfMine);
        
        
    }
    return 0;
}

