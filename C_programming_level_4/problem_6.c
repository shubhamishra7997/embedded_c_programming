//Question: Get a Two digit number from the user and print the reverse of it.
// Example: User Enters “73”, Answer - 37

#include<stdio.h>

int main()
{
    unsigned int x, rev;
    rev = 0;
    printf ("Enter a Two-digit Number: ");
    scanf ("%d", &x);
    rev = (x % 10)*10 + (x/10);
    printf ("The number reversed is %d\n",rev);
    return 0;
}