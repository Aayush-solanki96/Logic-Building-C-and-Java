#include<stdio.h>
int average(int x,int y,int z){
    int average = (x+z+y)/3;
    printf("Average is %d",average);

    return average;
}
int main(){

    int a,b,c;

    printf("Enter a :");
    scanf("%d",&a);

    printf("Enter b :");
    scanf("%d",&b);

    printf("Enter c :");
    scanf("%d",&c);

    average(a,b,c);

     return 0;
}