// #include<stdio.h>
// int main(){

//     int year;
//     printf("Enter years :");
//     scanf("%d",&year);

//     if ((year%4 == 0)&&(year%100 != 0 || year%400 == 0)){
//         printf("Leap year");
//     }
//         else{
//             printf("Not an Leap year");
//         }
//     return 0;

// }

#include <stdio.h>

int main()
{

    int year;

    printf("Enter year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is a leap year .\n", year);
    }
    else
    {
        printf("%d is not a leap year .\n", year);
    }
    return 0;
}