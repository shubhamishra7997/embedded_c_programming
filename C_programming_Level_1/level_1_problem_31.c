/*
Question: Get a three-digit number from user. If the sum of the digits is less than 10, then print
the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10,
then print the sum, otherwise add the digits of the sum, and print the sum.
Note: The result should be always single digit only.

Example: Input: 123 – Output: 6

Input: 149 - Output: 5 (149:1+4+9 = 14: 1+4 = 5)
Input: 991 - Output: 1 (991: 9+9+1 = 19: 1+9 = 10: 1+0 = 1)
*/

#include<stdio.h>
int main ()
{
int x,y;
int ones, tens, hundreds;
printf ("Enter Number : ");
scanf("%d",&x);

ones = x%10;
printf ("Ones : %d\n", ones);
tens = (x/10)%10;
printf ("Tens : %d\n", tens);
hundreds = (x/100)%10;
printf ("Hundreds : %d\n", hundreds);

y = ones + tens + hundreds;
if (y < 10)
    {printf("Sum is: %d\n", y);}
else if (y == 10)
    {y = 1;
    printf("Sum is: %d\n", y);}
else
    {y = (y/10) + (y%10);
    if(y == 10)
        {y = 1;
        printf("Sum is: %d\n", y);}
    printf("Sum is: %d\n", y);}

}

