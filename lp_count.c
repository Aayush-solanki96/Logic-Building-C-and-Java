#include<stdio.h>
int main(){

    int num;
    printf("Enter number :");
    scanf("%d",&num);

    for(int i=num;i>=0;i--){
     
    printf("%d\n",i);
    }

      for(int i=1;i<=num;i++){
     
    printf("%d\n",i);
    }
    return 0;
}