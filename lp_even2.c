#include<stdio.h>
int main(){

    int n;
    do {
    printf("Enter number : ");
    scanf("%d",&n);
    
    if(n % 2 != 0){
        printf("Odd number , Try again\n");
    }
 }
    while(n % 2 != 0);

    printf("Success !");

    return 0;

}