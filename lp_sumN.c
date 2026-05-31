#include<stdio.h>

int main(){  

//Sum of n Natural numbers :
   
    int n,sum=0;

    printf("Enter number :");
    scanf("%d" , &n);

    for(int i=1;i<=n;i++){
        sum = sum + i;
    }

    printf("Sum is %d \n", sum);

    return 0;

}