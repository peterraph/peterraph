//bank loan program//
/*Author:peter maina
Reg no:CT101/G/22779/24*/

#include<stdio.h>

int main() {
    int age;
    float income;

    // Prompt the user for their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Prompt the user for their annual income
    printf("Enter your annual income (in KES): ");
    scanf("%f", &income);

    // Check if the customer is eligible for a loan
    if (age >= 21 && income >= 21000) {
        printf("cogratulations you qualify for a loan.\n");
    } else {
        printf("unfortunately ,we are unable to offer you a loan at this time.\n");
    }

return 0;
}