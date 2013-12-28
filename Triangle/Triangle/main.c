//
//  main.c
//  Triangle
//
//  Created by Joseph Priest on 9/26/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
float traingle(float first, float second){
    float answer = 0;
    answer = 180 - first -second;
    
    return answer;
}
int main(int argc, const char * argv[])
{
    float first = 30;
    float second = 40.5;
    float answer = traingle(first, second );
    printf("The third angle is %.2f\n", answer );
    
    return EXIT_SUCCESS;
}

