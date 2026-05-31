#include<stdio.h>

void areaR(int length , int breadth);
int main(){

    int a,b;

    printf("Enter number 1st :");
    scanf("%d",&a);

    printf("Enter number 2nd :");
    scanf("%d",&b);    
  
  
    areaR(a,b);

    return 0;
}

void areaR(int length , int breadth){
    int area = length * breadth ;
    printf("Area of rectangle is %d unit%c\n",area,253);
}