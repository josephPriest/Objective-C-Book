//
//  main.c
//  BeerSong
//
//  Created by Joseph Priest on 9/26/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#include <stdio.h>

void singTheSong(int numberOfBottles){
    if(numberOfBottles == 0)
        printf("There is simply no more bottles of beer on the wall");
    else {
        printf("%d bottles og beer on the wall. %d bottles of beer.\n", numberOfBottles, numberOfBottles);
        int oneFewer=numberOfBottles-1;
        printf("Take one down, pass it around, %d bottles of beer on the wall.\n", oneFewer);
        singTheSong(oneFewer); //Recursion!
        printf("Put a bottle in the recycling, %d empty bottles in the bin.\n", numberOfBottles);
    }
}
int main(int argc, const char * argv[])
{
    singTheSong(99);
    
    return 0;
}

