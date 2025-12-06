#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Input Format:
// Single integer.

// Output Format
// Print the data in the given format: Half of {num} is {halfValue}

int main() {

    int num;
    
    scanf("%d",&num);
    float res=num/2.00;
    printf("Half of %d is %.2f",num,res);  //%.2f->denotes that there will be only two numbers after decimal
    return 0;
}


// Sample Input 0

// 10
// Sample Output 0

// Half of 10 is 5.00
// Sample Input 1

// 7
// Sample Output 1

// Half of 7 is 3.50
// Sample Input 2

// -8
// Sample Output 2

// Half of -8 is -4.00
