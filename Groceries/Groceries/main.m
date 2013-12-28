//
//  main.m
//  Groceries
//
//  Created by Joseph Priest on 11/1/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <string.h>
int main(int argc, const char * argv[])
{

    @autoreleasepool {
       
        
        NSMutableArray *groceries = [NSMutableArray array];
        
        NSString *celery = @"Celery";
        
        
        
        
         //Read in a file as a huge string (ignoring the possibility of an error)
        NSString *nameString = [NSString stringWithContentsOfFile:@"/usr/share/dict/propernames" encoding:NSUTF8StringEncoding error:NULL];
        
        //Break into an array of strings
        NSArray *names = [nameString componentsSeparatedByString:@"\n"];
        
        //Go through the array one string at a time
        for (NSString *n in names) {
            //Look for the stirng "aa" in a case-insensitive manner
            NSRange r = [n rangeOfString:@"AA" options: NSCaseInsensitiveSearch];
            
            
            //Was it found
            if (r.location != NSNotFound){
                NSLog(@"%@", n);
            }
        }
        
        
    }
    return 0;
}

