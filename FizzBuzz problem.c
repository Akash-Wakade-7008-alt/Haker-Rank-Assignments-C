#include <stdio.h>

// FizzBuzz problem

//  if a number is divisible by 3 ----> print Fizz

//  if a number is divisible by 5 ---->print Buzz

//  if a number is divisible by both 3 and 5 ----> print FizzBuzz

int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("FizzBuzz");
    }

    else if (num % 3 == 0)
    {
        printf("Fizz");
    }

    else if (num % 5 == 0)
    {
        printf("Buzz");
    }

    else
    {

        printf("%d", num);
    }

    return 0;
}