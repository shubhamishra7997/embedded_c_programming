//Question: Write a program to print the sum of single digit Prime numbers
//Answer: 18

#include<stdio.h>
#include<stdbool.h>

int main()
{
    unsigned int sum = 0;
    bool prime_flag = 1; //assume number is prime.
    for(unsigned int i = 100; i<1000; i++)
    {
        for(unsigned int j = 2; j<i; j++) //check all number between 
        {
            if(i % j == 0) //number is divisible, hence not prime
            prime_flag = 0; //set flag down.
        }
        if (prime_flag)
        {
            printf("Number is prime: %d\n", i);
            sum = sum + i;
        }
        prime_flag = 1; //reset the flag.
      
    }
    printf("Count is: %d\n", sum);
}
