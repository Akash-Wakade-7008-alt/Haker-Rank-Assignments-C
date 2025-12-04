#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
Expected Input:
Two integers:{Lenght},{Breadth}

Expected Output:
Single line printing the result as:
The area is:{res} units
*/

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int lenght,bredth;
    scanf("%d",&lenght);
    scanf("%d",&bredth);
    
    int res=lenght*bredth;
    printf("The area is: %d units",res);
    
    return 0;
}
