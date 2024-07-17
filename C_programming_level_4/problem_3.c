//Question: Get a Three digit number from user and print the digit in “Ones” position
// Example: User Enters “738”, Answer - 8

#include<stdio.h>

int main()
{
    int x;
    printf ("Enter a Three-digit Number: ");
    scanf ("%d", &x);
    x = x%10;
    printf ("The digit in Ones position is %d\n",x);
    return 0;
}