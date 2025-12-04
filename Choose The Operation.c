#include <stdio.h>

/*
Expected Output:
Choose an operation:
1.Addition
2.Subtraction
3.Multiplication
4.Division

Enter Your Choice(1-4):
 
Enter the 1st Number :

Enter the 2nd Number:

Result is:
*/


int main()
{
    
    int operation=0,num_1=0,num_2=0,res;
    
    printf("Choose an operation:\n");
    printf("1.Addition:\n");
    printf("2.Subtraction:\n");
    printf("3.Multiplication:\n");
    printf("4.Division:\n");
    
     scanf("%d",&operation);
     
     printf("Enter The First Number\n");
     scanf("%d",&num_1);
     
     printf("Enter the second number:\n");
     scanf("%d",&num_2);
     
     if(operation==1){
         res=num_1+num_2;
    }
     
     else if(operation==2){
         res=num_1-num_2;
    }
     
     else if(operation==3){
         res=num_1*num_2;
     }
     
     else if(operation==4){
         res=num_1/num_2;
     }
     
     else{
         printf("Invalid Number,Choose between 1 and 4");
     }
     
     printf("%d",res);
    return 0;
}
