/*
Question: Write a loop program to print the two-digit odd numbers, below 20.
Answer: 11
13
15
17
19
*/

#include<stdio.h>
int main ()
{
int x;
x = 0;
loop: if(x < 20)
{
    if((x > 10) && (x%2 != 0))
    {
        printf("%d\n",x);
    }
    x = x + 1;
goto loop;
}
}