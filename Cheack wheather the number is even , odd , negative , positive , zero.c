#include <stdio.h>

// find wheather the number is even , odd , positive , negative , Zero

int main()
{
   int num;
   
   printf("Enter the number\n");
   scanf("%d",&num);
   
   if(num>0){
       
       if(num%2==0){ 
           
           printf("The number is positive and even");
       }
       
       else{
           
           printf("The number is positive and odd");
       }
   }
   
else if(num<0){
    
        if(num%2==0){
            
           printf("The number is negative and even");
        }
     
        else{
        
        printf("The number is negative and odd"); 
     }
  }
  
  else{
      
      printf("The number is Zero");
  }
  
 
    return 0;
}