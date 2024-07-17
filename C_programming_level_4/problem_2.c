//Question: Get a Two digit number from user and print the digit in “Tens” position.
//Example: User Enters “78”, Answer - 7

#include<stdio.h>

int main()
{
    int x;
    printf ("Enter a TWO-digit Number: ");
    scanf ("%d", &x);
    x = x/10;
    printf ("The digit in Tens position is %d\n",x);
    return 0;
}