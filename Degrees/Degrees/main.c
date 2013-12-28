//
//  main.c
//  Degrees
//
//  Created by Joseph Priest on 9/26/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

float fahrenheitFromCelsius(float cel){
    float fahr = cel *1.8 +32;
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr);
    
    return fahr;
}
int main(int argc, const char * argv[])
{
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelsius(freezeInC);
    printf("Water freezes at %f degrees Fahrenheit\n", freezeInF);
    return EXIT_SUCCESS;
}

