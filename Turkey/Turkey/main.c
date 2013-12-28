//
//  main.c
//  Turkey
//
//  Created by Joseph Priest on 9/25/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //Declare the variable called 'weight' of type float
    float weight;
    
    //put a number in the variable
    weight=14.2;
    
    //log it to the user
    printf("The turkey weighs %f.\n", weight);
    
    //Decalre another variable of type float
    float cookingTime;
    
    //Calculate the cooking time
    //In this case, '*' means multiplied by
    cookingTime = 15.0 +15.0 * weight;
    
    //log that to the user
    printf("The cooking time for the turkey is %f minutes.\n" , cookingTime);
    
    //end this function and indicate success
    return 0;
}

