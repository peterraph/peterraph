//CALCULATING THE COMPOUND INTEREST//
/*AUTHOR:peter maina
REG NO:CT101/G/22779/24*/

#include<stdio.h>
int main () {
    int principal, time,years;
    float rate,compound_interest;
    printf("Enter principal amount");
    scanf("%d",&principal);
    printf("Enter the period of time in years");
    scanf("%d",&time);
    printf("Enter the rate of interest compounded annually");
    scanf("%d",&years); 
    printf("Enter the rate of interest");
    scanf("%f",&rate);
compound_interest=principal*((1+rate/years),years*time);
    printf("Enter the compound_interest %.2f\n",compound_interest );
return 0;
} 