//program to find compound interest
/*
Author: Brian Waema Mativo
Reg No: CT101/G/22118/24
*/
//preprocessor directive printf()

#include <stdio.h>
#include <math.h>

int main()
{
    //declaration and initialization
    float principal;
    int rate;
    int time;
    int n;

    printf("Enter the principal: ");
    scanf("%f", &principal);

    printf("Enter the interest rate: ");
    scanf("%d", &rate);

    printf("Enter the time: ");
    scanf("%d", &time);

    printf("Enter numbers of times interest applied per time period: ");
    scanf("%d", &n);

    /*calculate total amount with compound interest*/
    float A;
    A = principal * pow((1 + rate / n), n*time);
    printf("The total amount is: %.2f \n", A);

    /*calculate the compound interest*/
    float CI;
    CI = A - principal;
    printf("The Compound interest = %.2f \n", CI);

    return 0;
}
