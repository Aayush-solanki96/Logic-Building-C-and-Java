#include<stdio.h>
int main(){

    int num,check;

    do{
        printf("Enter number:");  
        check = scanf("%d",&num );

        if(check != 1){

            printf("Enter valid numbers only\n");

             while(getchar() != '\n');
             continue;
        }

        if (num %2 != 0){

            printf("Try Again!( Enter an even number )\n");
        }

    }while(num %2 != 0);
    printf("Success!");
    
return 0; 
}
