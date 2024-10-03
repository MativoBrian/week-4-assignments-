//program to find fine for overdue books in the library
/*
Author: Brian Waema Mativo
Reg No: CT101/G/22118/24
*/
//preprocessor directive printf()

#include <stdio.h>
#include <math.h>

int main()
{
    int BookID;
    int DueDate;
    int ReturnDate;

    printf("Enter the Book ID: ");
    scanf("%d", &BookID);

    printf("Enter the Due Date: ");
    scanf("%d", &DueDate);

    printf("Enter the Return Date: ");
    scanf("%d", &ReturnDate);

    int DaysOverdue;
    DaysOverdue = ReturnDate - DueDate;

    if (DaysOverdue <= 7){
            printf("The book ID is %d \n", BookID);
            printf("The due date is %d \n", DueDate);
            printf("The return date is %d \n", ReturnDate);
            printf("The days overdue is %d \n", DaysOverdue);
            printf("The fine rate is Ksh 20 per day \n");
            int fineamount;
            fineamount = DaysOverdue * 20;
            printf("The fine amount is: %d \n", fineamount);

            return 0;

    }else if (DaysOverdue <= 14){
            printf("The book ID is %d \n", BookID);
            printf("The due date is %d \n", DueDate);
            printf("The return date is %d \n", ReturnDate);
            printf("The days overdue is %d \n", DaysOverdue);
            printf("The fine rate is Ksh 50 per day \n");
            int fineamount;
            fineamount = DaysOverdue * 50;
            printf("The fine amount is: %d \n", fineamount);

            return 0;

    } else{
            printf("The book ID is %d \n", BookID);
            printf("The due date is %d \n", DueDate);
            printf("The return date is %d \n", ReturnDate);
            printf("The days overdue is %d \n", DaysOverdue);
            printf("The fine rate is Ksh 100 per day \n");
            int fineamount;
            fineamount = DaysOverdue * 100;
            printf("The fine amount is: %d \n", fineamount);

            return 0;

    }

    return 0;
}
