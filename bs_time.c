#include<stdio.h>

int main(){

    int sec;
    printf("Enter seconds :");
    scanf("%d",&sec);

    int day,hour;
    day = sec/(24*3600) ;
    hour = (sec % 86400)/3600 ;


    printf("%d\n", day);
    printf("%d", hour );

    return 0;

}