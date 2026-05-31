#include<stdio.h>

int main(){

    int n,m=0;

    printf("Enter a Natural number : ");
    scanf("%d",&n);

    if((n < 0)|| (n >='a'&& n <= 'z') ||( n >= 'A' && n <= 'Z')){
        printf("Enter an valid natural number .");
    }
    else {
        printf("Passed");
    }
    return 0;
}