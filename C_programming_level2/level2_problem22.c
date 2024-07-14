//Question: Write a program get number from user print the total number of two-digit odd numbers in the number.
//Answer: Input: 12345678 - Output: 3
//Input: 987531 - Output: 4

#include<stdio.h>

int main()
{
    printf("Start of solution!\n");
    int x, count, xmodten;
    count = 0;
    printf("Enter input\n");
    scanf("%d", &x);
    printf("Input is: %d\n", x);
    while(x>0)
    {
        xmodten = x%10;
        printf("New number is: %d\n", xmodten);
        if((xmodten %2) != 0)
        {
            printf("Odd digit found: %d\n", xmodten);
            count = count + 1;
        }
        x = x/10;
        if(x<10 && (x%2 != 0))
        {
            printf("MSB is odd: %d\n", x);
            count = count - 1;
            printf("Total number of odd digits are: %d\n", count);
        }
        printf("Total number of odd digits are: %d\n", count);
    }
    //printf("x is: %d\n", x);
    // if((x %2) != 0)
    //     {
    //         printf("Odd digit found at MSB: %d\n", x);
    //         count = count - 1;
    //     }
    //     printf("Total number of odd digits are: %d\n", count);
    printf("End of solution!\n");
    return 0;

}