#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// input Format
// Single integer input: {age}
// age>=18;

// Output Format
// You must print:
// "Eligible" or "Not Eligible"



int main() {

   int age;
    scanf("%d",&age);
    if(age>=18){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}


Sample Input 0

20
Sample Output 0

Eligible
Sample Input 1

17
Sample Output 1

Not Eligible
Sample Input 2

18
Sample Output 2

Eligible

