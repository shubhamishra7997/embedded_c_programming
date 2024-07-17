//Question: Print the Largest Four digit prime number
//Answer: 9973



#include<stdio.h>
#include<stdbool.h>

int main()
{
    unsigned int prev[5000] = {}; //yes, this is valid in c.
    unsigned int count = 0;
    bool prime_flag = 1; //assume number is prime.
    unsigned int i = 0;
    for(i = 2; i<10000; i++)
    {
        for(unsigned int j = 2; j<i; j++) //check all number between 
        {
            if(i % j == 0) //number is divisible, hence not prime
            prime_flag = 0; //set flag down.
        }
        if(prime_flag) //number is prime
        { 
            prev[count] = i;
            count++;
        }
        prime_flag = 1; //reset the flag, meaning number was not prime.
    }
    printf("Largest number is: %d\n", prev[count-1]);
}
