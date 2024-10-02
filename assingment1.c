//VARIABLES AND DATA TYPES//
/*Variables
Author: Peter maina
Reg no:CT101/G/22779/24*/



#include<stdio.h>
int main() {
    char A;
    char name[] ={};
    int age;
    float salary;
    double budget;
    printf("enter the age");
    scanf("%d",&age);
    printf("your age is: %d\n",age);
    printf("enter the salary");
    scanf("%f",&salary);
    printf("your salary is : %.2f\n",salary);
    printf("enter the budget");
    scanf("%lf",&budget);
    printf("you budget is : %.2lf\n",budget);
return 0;

}