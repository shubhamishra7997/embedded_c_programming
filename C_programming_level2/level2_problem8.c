/*
Question: Write a loop program to print the two-digit even numbers, who’s sum of digits are 6.

Answer: 24
42
60
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
    if((x>10) && (sum == 6) && (x%2 == 0))
    {
        printf("%d\n",x);
    }
    x = x + 1;
goto loop;
}
}