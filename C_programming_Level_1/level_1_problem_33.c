/*
Question: Get two 2-digit numbers from user. Print the sum of digits of the biggest number.
Example: Input: 56 78 – Output: 15
Input: 14 65 - Output: 11
*/


#include<stdio.h>
int main ()
{
int x1,x2;
int a,b;
printf ("Enter Number 1: ");
scanf("%d",&x1);
printf ("Enter Number 2: ");
scanf("%d",&x2);

if (x1 > x2)
    a = x1;
else 
    a = x2;
    
b = (a/10) + (a%10);

printf("Output is: %d\n", b);
}

