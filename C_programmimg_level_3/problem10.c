//Question: Get a number from user, find the number of digits and print the same.
//Example: Input: 34678 Output: 5. Input: 12345678 Output: 8

#include <stdio.h>
#include<math.h>
int count_digits(int n);
int main()
{
    int number,result;
    scanf("%d",&number);
    result = count_digits(number);
    printf("%d",result);
    return 0;
}
int count_digits(int no)
{
    int count =0;
    while(no!=0)
    {
        count++;
        no=no/10;
    }
    return count;
}
