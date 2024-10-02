//CALCULATING SIMPLE INTEREST//
/*Author:peter maina
Reg no: CT101/G/22779/24*/

#include<stdio.h>#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the interest rate: ");
    scanf("%f", &rate);

    printf("Enter the period in years: ");
    scanf("%f", &time);

    // calculating simple_interest
    simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}
