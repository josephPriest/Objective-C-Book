//
//  main.c
//  PBR
//
//  Created by Joseph Priest on 10/3/13.
//  Copyright (c) 2013 Joseph Priest. All rights reserved.
//

#include <stdio.h>
#include <math.h>


void  cartesianToPolar(float x, float y, double *rPtr, double *thetaPtr){
    //Is rPTR non-Null?
    if(rPtr){
     //Store the radius om tje supplied address
        *rPtr = sqrt(x*x+y*y);
    }
    
    //Is thetaPtr Null?
    if(!thetaPtr){
        //Skip the rest of this function
        return;
        
    }
    
    
    //Calculate theta
    float theta;
    if(x==0.0){
        if(y==0.0){
            theta = 0.0; //technically considered undefined
            
        }else if (y> 0){
            theta = M_PI_2;
        }else {
            theta = -M_PI_2;
        }
    }else {
        theta = atan(y/x);
    }
    //Store the supplied values
    *thetaPtr = theta;
    
}
int main(int argc, const char * argv[])
{
    double pi = 3.14;
    double integerPart;
    double fractionPart;
    
    //Pass the address of integerPart as an argument
    fractionPart = modf(pi, &integerPart);
    
    //Find the value stored in integerPart
    printf("integerPart = %.0f, fractionPart = %.2f\n", integerPart, fractionPart);
    
    double x = 3.0;
    double y= 4.0;
    double radius;
    double angle;
    
    cartesianToPolar(x,y, &radius, &angle);
    printf("(%.2f, %.2f) becomes (%.2f radias, %.2f)\n", x, y, radius, angle);
    
    
    
    
    return 0;
}

