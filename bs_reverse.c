#include<stdio.h>
int main(){

    // Input a 5-digit number and print it in reverse. 
    // If the reverse is the same as the original, print "Palindrome."

    int num;
    printf("Enter number :");
    scanf("%d",&num);

    int a,b,c,d,e;

    a=num/10000;
    b=(num/1000)%10;
    c=(num%1000)/100;
    d=(num%100)/10;
    e=num%10;

    printf("%d%d%d%d%d",e,d,c,b,a);


    return 0;
}