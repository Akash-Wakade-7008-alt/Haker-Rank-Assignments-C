
#include <stdio.h>

// find the number of digits in a number

// constrains: 0<=number<=100000

int main()
{

    int num;

    printf("Enter the number\n");
    scanf("%d", &num);

    if (num / 10 == 0)
    {

        printf("%d is a 1 digit numbner", num);
    }

    else if (num / 100 == 0)
    {
        printf("%d is a 2 digit number", num);
    }

    else if (num / 1000 == 0)
    {
        printf("%d is a 3 digit number", num);
    }

    else if (num / 10000 == 0)
    {
        printf("%d is a 4 digit number", num);
    }

    else if (num / 100000 == 0)
    {
        printf("%d is a 5 digit number", num);
    }

    return 0;
}