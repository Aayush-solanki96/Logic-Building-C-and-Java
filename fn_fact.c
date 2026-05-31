#include<stdio.h>

int fact(int n);

int main(){

    int final = fact(5);
    printf("%d",final);
    return 0;
}

int fact(int n){
    if(n==0){
        return 1;
    }

    int factNm1 = fact(n-1);
    int factN = fact(n-1) * n;

    return factN;
}