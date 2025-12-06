#include <stdio.h>

// Find the Quadrant,Axis of a given point
int main()
{

    int x = 0, y = 0;

    printf("Enter the x and y coordinates\n");
    scanf("%d %d", &x, &y);

    if (x > 0)
    {

        if (y > 0)
        {

            printf("The point is in the 1st Quadrant");
        }

        else if (y < 0)
        {

            printf("The point is in 4th Quadrant");
        }

        else
        {

            printf("The point is on positive X-axis");
        }
    }

    else if (x < 0)
    {

        if (y > 0)
        {

            printf("The ponit is in 2nd Quadrant");
        }

        else if (y < 0)
        {

            printf("The point is in 3rd Quadrant");
        }

        else
        {

            printf("The ponit is on negative X-axis");
        }
    }

    else
    {
        // x==0

        if (y > 0)
        {

            printf("The ponit is on positive Y-axis");
        }

        else if (y < 0)
        {

            printf("The point is on negative Y-axis");
        }

        else
        {
            // x==0 & y==0

            printf("The point is on origin");
        }
    }

    return 0;
}