#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
Input Format
Two unique integers a and b.

Output Format
Single line printing the result as: The sum of {a} and {b} is {sum}.
*/

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num_1,num_2;
    scanf("%d",&num_1);
    scanf("%d",&num_2);
    int sum=num_1+num_2;
    printf("The sum of %d and %d is %d.",num_1,num_2,sum);
    
    return 0;
}

// Sample Input 0

// 3 5
// Sample Output 0

// The sum of 3 and 5 is 8.
// Sample Input 1

// 10 20
// Sample Output 1

// The sum of 10 and 20 is 30.
// Sample Input 2

// 7 2
// Sample Output 2

// The sum of 7 and 2 is 9.
