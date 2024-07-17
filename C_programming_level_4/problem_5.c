//Question: Get a Three digit number from user and print the digit in “Hundreds” position.
//Example: User Enters “738”, Answer - 7

#include<stdio.h>

int main()
{
    int x;
    printf ("Enter a Three-digit Number: ");
    scanf ("%d", &x);
    x = x / 100;
    printf ("The digit in Hundreds position is %d\n",x);
    return 0;
}