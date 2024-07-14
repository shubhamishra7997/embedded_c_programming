/*
Question: Write a loop program to print the two-digit odd numbers, who’s sum of digits are 7.

Answer: 25
43
61
*/

#include<stdio.h>
int main ()
{
int x;
x = 0;
int sum;
loop: if(x < 100)
{
    sum = 0;
    sum = (x%10) + (x/10);
    if((x>10) && (sum == 7) && (x%2 != 0))
    {
        printf("%d\n",x);
    }
    x = x + 1;
goto loop;
}
}