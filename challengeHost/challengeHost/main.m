//
//  main.m
//  challengeHost
//
//  Created by Joseph Priest on 10/31/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//
//  This program was a challenge that asked to print out the name of your computer by utilizing a class
//  and a instance method
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
      
        NSHost *name = [NSHost currentHost];
        NSString *myName = [name localizedName];
        NSLog(@"My computer name is %@ ", myName);
    
        
    }
    return 0;
}

