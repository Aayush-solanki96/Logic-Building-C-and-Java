#include<stdio.h>
int main(){

    int num,Sum=0;
    int sum=0;

    printf("Enter number N :");
    scanf("%d",&num);
printf("Logic 1st\n");
    for(int i=1;i<=num;i+=2){
    sum = sum + i ;
   
    } printf("Sum is %d\n",sum);

printf("Logic 2nd\n");
      for(int i=1;i<=num;i++){
      if(i % 2 != 0){
    Sum = Sum + i ;
    
    }}
    printf("Sum is %d\n",Sum);
    
    return 0; 

}

   

