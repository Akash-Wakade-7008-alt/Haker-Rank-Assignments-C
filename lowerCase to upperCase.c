#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
Input Format:
A single lowercase character charLower.

Output Format:
A single line in the format:
The uppercase of {charLower} is {charUpper}
*/

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char alphabet_1;
    scanf("%c",&alphabet_1);
    
char alphabet_2=alphabet_1-32;
    printf("The uppercase of %c is %c",alphabet_1,alphabet_2);

    return 0;
}


// Sample Input 0

// a
// Sample Output 0

// The uppercase of a is A
// Sample Input 1

// z
// Sample Output 1

// The uppercase of z is Z
// Sample Input 2

// g
// Sample Output 2

// The uppercase of g is G
