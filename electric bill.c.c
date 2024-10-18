//electric bill calculator;
/*Author:peter maina
Reg no:ct101/G/22779/24*/

#include <stdio.h>

int main() {
    int customerID, unitconsumed;
    char customername[50];
    float charge, totalamount;

    printf("Enter the customerID: ");
    scanf("%d", &customerID);

    printf("Enter the unitconsumed: ");
    scanf("%d", &unitconsumed);

    printf("Enter your name: ");
    scanf("%s", customername);

    // Calculate charge based on unit consumed
    if (unitconsumed <= 199) {
        charge = unitconsumed * 1.20;
    } else if (unitconsumed >= 200 && unitconsumed < 400) {
        charge = unitconsumed * 1.50;
    } else if (unitconsumed >= 400 && unitconsumed < 600) {
        charge = unitconsumed * 1.80;
    } else if (unitconsumed >= 600) {
        charge = unitconsumed * 2.00;
    }

    // Apply additional charges if applicable
    if (charge > 400) {
        charge += charge * 0.15;
    }

    // Ensure minimum charge
    if (charge < 100) {
        charge = 100;
    }

    // Calculate total amount
    totalamount = charge;

    // Print the details
    printf("customerID: %d\n", customerID);
    printf("customername: %s\n", customername);
    printf("charge_per_unit: %.2f\n", charge / unitconsumed);
    printf("totalamount: %.2f\n", totalamount);

    return 0;
}