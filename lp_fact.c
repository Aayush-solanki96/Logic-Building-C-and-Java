#include<stdio.h>

int main(){

    int n;
    long long int cr=1;

    printf("Enter number(0-25):");
    scanf("%d",&n);

    if(n<=25){

    for(int i=1;i<=n;i++){
        cr= cr * i ;
    }

    printf("Factorial of %d is %lld  ",n,cr );}

    else{
        printf("Enter an number between 0 to 20");
    }

    return 0;

}

