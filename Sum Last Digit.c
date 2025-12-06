#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
Input Format
Two integers: {a} {b}

Output Format
Single line printing the result as: The sum of last digits is: {res}
*/

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    int num_1,num_2;
    
    scanf("%d",&num_1);
    scanf("%d",&num_2);
    
    int res=num_1%10+num_2%10;
        
    printf("The sum of last digits is: %d",res);
    
    return 0;
}

// Sample Input 0

// 42 59
// Sample Output 0

// The sum of last digits is: 11
// Sample Input 1

// 100 9
// Sample Output 1

// The sum of last digits is: 9
