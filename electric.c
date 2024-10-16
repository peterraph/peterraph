
#include <stdio.h>

// Function to calculate the charge on units consumed
float calculateCharge(int unitconsumed) {
    float charge;
    if (unitconsumed <= 199) {
        charge = unitconsumed * 1.20;
    } else if (unitconsumed >= 200 && unitconsumed < 400) {
        charge = unitconsumed * 1.50;
    } else if (unitconsumed >= 400 && unitconsumed < 600) {
        charge = unitconsumed * 1.80;
    } else if (unitconsumed >= 600) {
        charge = unitconsumed * 2.00;
    }


    if (charge > 400) {
        charge += charge * 0.15;
    }


    if (charge < 100) {
        charge = 100;
    }

    return charge;
}

int main() {
    char customername[50];
    int customerID, unitconsumed;
    float charge, totalamount;

printf("Enter your name: ");
    scanf("%s", customername);

    printf("Enter the customerID: ");
    scanf("%d", &customerID);

    printf("Enter the unitconsumed: ");
    scanf("%d", &unitconsumed);
    charge = calculateCharge(unitconsumed);

    
    totalamount = charge;


    printf("customerID: %d\n", customerID);
    printf("customername: %s\n", customername);
    printf("charge_per_unit: %.2f\n", charge / unitconsumed);
    printf("totalamount: %.2f\n", totalamount);

    return 0;
}
