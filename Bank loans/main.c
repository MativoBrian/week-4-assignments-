//program to show loan qualifications
/*
Author: Brian Waema Mativo
Reg No: CT101/G/22118/24
*/
//preprocessor directive printf()

#include <stdio.h>

int main()
{
    int age;
    float salary;

    printf("Enter your age please: ");
    scanf("%d", &age);

    if (age >= 21){
        printf("Thank you proceed. \n");
    }else {
    printf("Unfortunately, we are unable to offer you a loan at this time.");
    return 0;
    }

    printf("Please enter your annual salary: ");
    scanf("%f", &salary);
    if (salary >= 21000){
        printf("Congratulations you qualify for a loan!");
    }else {
        printf("Unfortunately, we are unable to offer you a loan at this time.");
    }

    return 0;
}
