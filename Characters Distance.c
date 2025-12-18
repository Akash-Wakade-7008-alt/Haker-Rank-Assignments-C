#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
Expected Input:
Two lowerCase characters {char 1} and {char 2} seperated by space

Ecpected Output:
Single line printing the result as :
The distance between {char 1} and {char 2] is {value}
*/

int main() {


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char alphabet_1,alphabet_2;
    
    scanf("%c %c",&alphabet_1,&alphabet_2);
    int diff=alphabet_2-alphabet_1;
    printf("The distance between %c and %c is %d",alphabet_1,alphabet_2,diff);
    return 0;
}


// ample Input 0

// 10
// 3
// Sample Output 0

// 10
// Sample Input 1

// 5
// 1
// Sample Output 1

// 7

