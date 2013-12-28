//
//  main.c
//  Numbers
//
//  Created by Joseph Priest on 9/26/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, const char * argv[])
{

    unsigned long x = 255;
    double y = 23243343.34;
    printf("x is %lu.\n", x);
    printf("In octal, x is %lo.\n", x);
    printf("In hexadecimal, x is %lx.\n", x);
    printf("I want to print some diffrently formatted numbers\n");
    printf("Here is a scientific notation version: %e\n", y);
    printf("Here it is in trimmed notation: %.2f \n\n\n\n\n", y);
    //Challenge: Extend library and use Math.h
    y = sin(1);
    printf("Here it is in trimmed notation: %.3f\n", y);
    
    
    return EXIT_SUCCESS;
}

