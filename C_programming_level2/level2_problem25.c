//Question: Question: Write a program get number from user, print the total number of single-digit prime numbers in the number.
//Answer: Input: 163496481 - Output: 1 (3)
//Input: 364925 - Output: 3 (3,2,5)
#include<stdio.h>

int main()
{
    printf("Start of solution!\n");
    int x, count, prime;
    count = 0;
    printf("Enter input\n");
    scanf("%d", &x);
    printf("Input is: %d\n", x);
    while(x>0)
    {
        prime = x%10;
        printf("New number is: %d\n", prime);
        if((prime == 3) | (prime == 2) | (prime == 3) | 
        (prime == 5) | (prime == 7))
        {
            printf("Prime found: %d\n", prime);
            count = count + 1;
        }
        x = x/10;
        printf("Total number of prime digits are: %d\n", count);
    }
    printf("End of solution!\n");
    return 0;

}