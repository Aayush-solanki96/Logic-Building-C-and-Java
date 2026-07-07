// #include<stdio.h>

// int main(){

//     int x,y;

//     // printf("Enter x and y co-ordinates (separated by space): ");
//     // scanf("%d %d", &x, &y);

//     printf("Enter x co-ordinate : ");
//     scanf("%d", & x);

//     printf("Enter y co-ordinate : ");
//     scanf("%d", & y);

//     if ( x == 0 && y == 0 ){
//         printf(" Points are at origin ");
//     }
//     else if ( x== 0 && (y > 0 || y < 0)){
//         printf("Points are at Y axis");
//     }
//      else if ( y== 0 && (x > 0 || x < 0)){
//         printf("Points are at X axis");
//      }
//     else if (x > 0 && y > 0 ){
//         printf("First Quadrant");
//     }
//     else if (x < 0 && y > 0 ){
//         printf("Second Quadrant");
//     }
//     else if (x < 0 && y < 0 ){
//         printf("Third Quadrant");
//     }
//     else if (x > 0 && y < 0 ){
//         printf("Fourth Quadrant");
//     }
//     else {
//         printf("points are at axis ");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{

    double x, y;

    printf("Enter x cordinate : ");
    scanf("%lf", &x);

    printf("Enter y cordinate : ");
    scanf("%lf",y);

    if (x == 0 && y == 0)
    {
        printf("Points are at origin ");
    }
    else if ((x == 0) && (y < 0 || y > 0))
    {
        printf("Points are at y axis ");
    }
    else if ((y == 0) && (x < 0 || x > 0))
    {
        printf("Points are at x axis ");
    }
    else if (x > 0 && y > 0)
    {
        printf("Points are in first Quadrant");
    }
    else if (x > 0 && y < 0)
    {
        printf("Points are in fourth Quadrant");
    }
    else if (x < 0 && y < 0)
    {
        printf("Points are in third Quadrant");
    }
    else if (x < 0 && y > 0)
    {
        printf("Points are in second Quadrant");
    }
    else{
        printf("Invalid co-ordinates");
    }

    return 0;
}
