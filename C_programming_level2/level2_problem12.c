/*
Question: Write a program to get a number from user and print the sum of all digits.

Answer: Input: 123456 - Output – 21
Input: 76895439 - Output – 51
Input: 675 – Output - 18
*/

#include<stdio.h>

int main ()
{
int x;
scanf("%d", &x);
int sum, a;
sum = 0;
a = 0;

while(x != 0)
{   
    a = x%10;
    sum = sum + a;
    x = x/10;
}
printf("Sum is: %d", sum);
}