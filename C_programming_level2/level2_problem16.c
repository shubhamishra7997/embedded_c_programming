/*
Question: Write a program get number from user print whether that number is prime or not.

Answer: Input : 31 - Output : Prime
Input : 27 - Output : Not Prime.
*/

#include<stdio.h>
int main ()
{
int x;
scanf("%d",&x);
int not_prime;
not_prime=0;
//printf("flag is set to: %d\n", not_prime);
for(int i=2; i<x;i++)
{
    if (x%i == 0)
        {
            //printf("%d is not prime and is divisble by %d\n", x,i);
            not_prime = 1;
        }
    //printf("flag is set to: %d\n", not_prime);
}
if(not_prime == 1)
    printf("%d is not prime", x);
else
    printf("%d is prime", x);
}