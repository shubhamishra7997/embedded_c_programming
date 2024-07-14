/*
Question: Write a program print total number of single digit Prime numbers
Answer: 4
*/


#include<stdio.h>
int main ()
{
int is_prime = 0;
int count = 0;
//printf("flag is set to: %d\n", not_prime);
for (int j=2;j<10;j++)
{
    printf("j is: %d\n", j);
    for(int i=2; i<j; i++)
    {
        if (j%i == 0)
            {
                printf("%d is not prime and is divisble by %d\n", j,i);
                is_prime = 1;
                break;
            }
        //printf("flag is set to: %d\n", not_prime);
    }
    if(is_prime == 0)
    {
        printf("Prime is : %d\n", j);
        count++;
    }
    is_prime=0; //IMP STEP
}
printf("Count is: %d\n", count);
}

