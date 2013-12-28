//
//  main.c
//  Addresses
//
//  Created by Joseph Priest on 10/2/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int i = 17;
    int *addressOfI = &i;
    
    printf("i stores its value at %p\n", addressOfI);
    printf("this function starts at %p\n", main);
    printf("THe int stored at address i is %d\n", *addressOfI);
    *addressOfI = 89;
    printf("Now i is %d\n", i);
    printf("An int is %zu bytes\n", sizeof(int));
    printf("A pointer is %zu bytes\n\n\n\n", sizeof(int*));
    //Challenge portion
    printf("A float consumes %zu bytes\n", sizeof(float));
    return 0;
}

