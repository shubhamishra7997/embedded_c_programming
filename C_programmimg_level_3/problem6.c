//Question: Get a number from user and reverse that number and print. Write your code inside the function. Do not Change the format.
//Example: Input: 123 Output: 321. Input: 56789 Output: 98765.

//logic: get the length of the number, then reverse it.
//Chatgpt logic: reverse the number and multiply by 10, then add the new digit and multiply both by 10.
#include <stdio.h>
#include<math.h>
int reverse_number(int no);
int reverse_numbers(int no);
int main()
{
    int number,result;
    scanf("%d",&number);
    result = reverse_numbers(number);
    printf("%d",result);
    return 0;
}
int reverse_number(int no)
{
    printf("inside the function\n");
    int result;
    result = 0;
    int num1;
    num1 = 0;
    int count;
    count = 0;
    int num2;
    num2=no;
    int i;
    int power;
    power = 0;
    //get length of the number
    while(num2>0)
    {
        count++;
        num2=num2/10;
    }
    printf("Length of input is: %d\n", count);
    //reverse the number with the power function
    for(i = 1; i < count+1 ; i++)
    {
        printf("i is: %d\n", i);
        power = count-i;
        printf("power is: %d\n", power);
        num1= no%10;
        printf("num1 is: %d\n", num1);
        result = result + num1* pow(10, power);
        printf("result is: %d\n", result);
        no = no/10;
    }
    return result;
}

int reverse_numbers(int no)
{
    int reversed = 0;
    while (no != 0)
    {
        reversed = reversed * 10 + no % 10;
        no = no / 10;
    }
    return reversed;
}