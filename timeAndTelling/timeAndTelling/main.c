//
//  main.c
//  timeAndTelling
//
//  Created by Joseph Priest on 10/11/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//
#include <time.h>
#include <stdio.h>


int main(int argc, const char * argv[])
{
// The challenge is to convert the seconds that are given and provide the Month-day-year format of them
// I don't really like how linear the challenge is (it only ask for a static value
    

    long seconds = 4000000;
    long localSeconds= time(NULL);
    long minutes, hours, days;
    
    
/* 
 I've added this part just so I knew exactly what the method was doing when it was looked at the current time and projected the other date based upon the amount of seconds that were being inputted
 */
    minutes = seconds / 60;
    hours = minutes / 60;
    minutes = seconds %60;
    days = hours / 24;
    hours = minutes % 24;
    seconds = seconds %60;
    
    

    printf(" What will the date be in %ld seconds?\n\n", seconds);
    printf(" The amount of time 4 millions seconds is %d days, %d hours %d minutes %d seconds\n\n", days, hours, minutes, seconds);
    
    struct tm now;
    localtime_r(&localSeconds, &now); //Didn't realize until I looked the function up that it required to address in order to store the results...time wasted
    printf("The date in 4 million seconds will be %d-%d-%d\n", now.tm_mon +1, now.tm_mday, now.tm_year);

    
    
    
    return 0;
}

