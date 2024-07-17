//Question: Write a program to print the total number of TWO digit Prime numbers
// Answer : 21


#include<stdio.h>
#include<stdbool.h>

int main()
{
    unsigned int count = 0;
    bool prime_flag = 1; //assume number is prime.
    for(unsigned int i = 10; i<100; i++)
    {
        for(unsigned int j = 2; j<i; j++) //check all number between 
        {
            if(i % j == 0) //number is divisible, hence not prime
            prime_flag = 0; //set flag down.
        }
        if (prime_flag)
        {
            printf("Number is prime: %d\n", i);
            count++;
        }
        prime_flag = 1; //reset the flag.
      
    }
    printf("Count is: %d\n", count);
}
