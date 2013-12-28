//
//  main.c
//  ClassCertificates
//
//  Created by Joseph Priest on 9/26/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void congratulateStudent(char *student, char *course, int numDays){
    printf("%s has done as much %s programming as I could fit into %d days\n", student, course, numDays);
    
    
}
int main(int argc, const char * argv[])
{
    congratulateStudent("Mark", "Cocoa", 5);
    sleep(2);
    congratulateStudent("John", "C++", 9);
    sleep(2);
    congratulateStudent("Julia", "Java", 9);
    sleep(2);
    
    return 0;
}

