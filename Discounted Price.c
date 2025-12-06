#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// Input Format:
// Two float values: {price} {percent}

// Output Format:
// Single line printing the result as: The final price is: {res}
// Where {res} is the final price printed using %f


float discounted(float price,float percentage){
    
    float discountAmount,discountedPrice,res;
    discountAmount=(price*percentage)/100;
    discountedPrice=price-discountAmount;
     
    return discountedPrice;
}

int main() {
    
    float price=0,percentage=0,res;
    scanf("%f %f",&price,&percentage);
    res=discounted(price,percentage);
    printf("The final price is: %f",res);
    
    return 0;
}

// Sample Input 0

// 1000 20
// Sample Output 0

// The final price is: 800.000000
// Sample Input 1

// 500 12.5
// Sample Output 1

// The final price is: 437.500000



