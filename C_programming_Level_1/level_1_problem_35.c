/*
Question: Get two 3-digit numbers from user. Add the one’s and hundred’s digits of both the numbers. 
Print the sum of all the digits of the number whose sum of one’s and hundred’s digits is bigger.
Example: Input: 856 978 – Output: 24
Input: 128 365 - Output: 11
*/


#include<stdio.h>
int main ()
{
int x1,x2;
printf ("Enter Number 1: ");
scanf("%d",&x1);
printf ("Enter Number 2: ");
scanf("%d",&x2);

int ones1, hundreds1, sum1;
ones1 = x1%10;
hundreds1 = x1/100;
sum1 = ones1 + hundreds1;

int ones2, hundreds2, sum2;
ones2 = x2%10;
hundreds2 = x2/100;
sum2 = ones2 + hundreds2;

int sum;
if (sum1 > sum2)
{
    sum = sum1 + (x1/10)%10;
    printf("Output is: %d\n", sum);
}
else
{
    sum = sum2 + (x2/10)%10;
    printf("Output is: %d\n", sum);
}
//printf("Output is: %d\n", b);
}

