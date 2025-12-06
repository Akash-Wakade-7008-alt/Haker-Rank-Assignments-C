#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
Input Format:
Three space-separated integers: {hours} {minutes} {seconds}

Output Format:
Single line printing the result as:
Total seconds: {res}
*/

int toSeconds(int hours,int minutes,int seconds){
    
    hours=hours*3600;
    minutes=minutes*60;
    int res=hours+minutes+seconds;
    return res;
}


int main(){

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int hoursToSeconds = 0,minutesToSeconds = 0,seconds = 0;
    
    scanf("%d %d %d",&hoursToSeconds,&minutesToSeconds,&seconds);
    
    int result=toSeconds(hoursToSeconds,minutesToSeconds,seconds);
    
    printf("Total seconds: %d",result);
    
    return 0;
    }


// Sample Input 0

// 1 0 0
// Sample Output 0

// Total seconds: 3600
// Sample Input 1

// 0 10 30
// Sample Output 1

// Total seconds: 630
