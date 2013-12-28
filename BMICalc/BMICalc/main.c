//
//  main.c
//  BMICalc
//
//  Created by Joseph Priest on 10/5/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#include <stdio.h>


//Here is the decaration of the struct Person
typedef struct{
    float heightInMeteres;
    int weightInKilos;
}Person;


float bodyMassIndex(Person p){
    return p.weightInKilos / (p.heightInMeteres * p.heightInMeteres);
}


int main(int argc, const char * argv[])
{
    Person person;
    person.weightInKilos = 98;
    person.heightInMeteres = 1.8;
    
    float bmi = bodyMassIndex(person);
    printf("person has a BMI of %.2f\n", bmi);
    
    
    
    
    return 0;
}

