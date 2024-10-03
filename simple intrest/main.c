//program to find simple interest
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
    int time;
    int rate;


    printf("what is your principal: ");
    scanf("%f", &principal);

    printf("Enter the time: ");
    scanf("%d", &time);

    printf("Enter the rate: ");
    scanf("%d", &rate);

    /*calculate simple interest */
    float SI;
    SI = ((principal*time*rate)/100);
    printf("Simple interest = %f", SI);

    return 0;
}
