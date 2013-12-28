//
//  main.c
//  FoundOne
//
//  Created by Joseph Priest on 9/30/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#include <stdio.h>


void test(int number){
    if(number % 5 == 0 && number != 0){
        printf("Found it!\n");
    } else{
        printf("%d\n", number);
    }

}

int main(int argc, const char * argv[])
{
    int number = 100;
    while(number > -1){
        test(number);
        number --;
    }
    
    
    return 0;
}

