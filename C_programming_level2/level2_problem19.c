/*
Question: Write a program to get a 4-digit number from user, print whether that
number’s middle two digits (hundred’s digit and ten’s digit) is prime.

Answer: Input: 6359 - Output: Not Prime
Input: 3517 - Output: Prime
*/

#include<stdio.h>
int main ()
{
int x;
scanf("%d", &x);
int num;
num = x%1000;
num = num/10;
printf("num is: %d\n ", num);
//prime or not.

int not_prime;
not_prime=0;
//printf("flag is set to: %d\n", not_prime);
for(int i=2; i<num; i++)
{
    if (num%i == 0)
        {
            printf("%d is not prime and is divisble by %d\n", num,i);
            not_prime = 1;
            break;
        }
    //printf("flag is set to: %d\n", not_prime);
}
if(not_prime == 1 )
    printf("%d is Not Prime ", num);
else
    printf("%d is Prime", num);
}