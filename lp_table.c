#include<stdio.h>

int main(){

    int n,m=1;

    printf("Enter number : ");
    scanf("%d",&n);

    if(n<=0){
        printf("Table doesn't exist");
    }

    else {
        for(int i=1;i<=1000;i++){
        m = n * i;
        printf("%d x %d = %d\n",n,i,m);
    }}
return 0;
}