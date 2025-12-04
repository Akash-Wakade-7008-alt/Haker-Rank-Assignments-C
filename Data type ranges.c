#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <float.h>
#include<limits.h>

/*
Input Format:
No input is required for this problem.

Expected Output:
short: -32768 to 32767
int: -2147483648 to 2147483647
long: -9223372036854775808 to 9223372036854775807
long long: -9223372036854775808 to 9223372036854775807
unsigned short: 0 to 65535
unsigned int: 0 to 4294967295
unsigned long: 0 to 18446744073709551615
unsigned long long: 0 to 18446744073709551615
char: -128 to 127
unsigned char: 0 to 255
float: 1.175494e-38 to 3.402823e+38
double: 2.225074e-308 to 1.797693e+308
long double: 3.362103e-4932 to 1.189731e+4932
*/

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    printf("short: %d to %d\n",SHRT_MIN,SHRT_MAX);
    printf("int: %d to %d\n",INT_MIN,INT_MAX);
    printf("long: %ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("long long: %lld to %lld\n",LLONG_MIN,LLONG_MAX);
    printf("unsigned short: %d to %hu\n",0,USHRT_MAX);
    printf("unsigned int: %d to %u\n",0,UINT_MAX);
    printf("unsigned long: %d to %lu\n",0,ULONG_MAX);
    printf("unsigned long long: %d to %llu\n",0,ULLONG_MAX);
    printf("char: %d to %d\n",SCHAR_MIN,SCHAR_MAX);
    printf("unsigned char: %d to %u\n",0,UCHAR_MAX);
    printf("float: %e to %e\n",FLT_MIN,FLT_MAX);
    printf("double: %e to %e\n",DBL_MIN,DBL_MAX);
    printf("long double: %Le to %Le\n",LDBL_MIN,LDBL_MAX);
    return 0;
}
