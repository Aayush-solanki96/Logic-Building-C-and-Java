#include<stdio.h>
int sum(int n);

int main(){
int n;
    printf("Enter number :");
    scanf("%d",&n);
    int final = sum(n);
    printf("%d",final);

    return 0;

}

int sum(int n){
    if(n == 0){
        return 0;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}