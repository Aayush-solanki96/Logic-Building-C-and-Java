// #include<stdio.h>
// #include<math.h>
// int main(){

//     float a,b,c;
//     float dis;
//     printf("Enter a :");
//     scanf("%f",&a);

//     printf("Enter b :");
//     scanf("%f",&b);

//     printf("Enter c :");
//     scanf("%f",&c);

//     dis = (b*b) - 4*a*c;
//     if (dis<0){
//         printf("Quadratic equations have Imaginary roots.\n");
//     }
//     else if(dis==0){
//          float x;
//         dis=sqrt(dis);
//         x=(-b)/2*a;
//         printf("Quadratic equations have two equal roots and roots are %.2f.\n",x);
//     }
//     else if(dis>0){
//         float x,y;
//         dis=sqrt(dis);
//         x=((-b)+dis)/2*a;
//         y=((-b)-dis)/2*a;

//         printf("Roots of quadratic equations are %.2f and %.2f.",x,y);
//     }
//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main()
{

    double a, b, c, d, r1, r2, real, image;

    printf("Enter a , b , c : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0)
    {
        printf("a must be greater than 0.\n");
        return 1;
    }
    d = (b * b) - 4 * (a * c);

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Quadratic equation have two real and distinct roots .\n");
        printf("Roots of quadratic equations are %.2lf and %.2lf", r1, r2);
    }
    else if (d == 0)
    {
        r1 = (-b) / (2 * a);

        printf("Quadratic equation have two real and equal roots .\n");
        printf("Roots of quadratic equations are (%.2lf and %.2lf)", r1, r1);
    }
    else
    {
        // Complex and Imaginart roots

        real = (-b) / (2 * a);
        image = (sqrt(-d)) / (2 * a);

        printf("Quadratic equation have complex and Imaginary roots. \n");
        printf("Roots of quadratic euation are (%.2lf + %.2lfi) and (%.2lf - %.2lfi)", real, image, real, image);
    }
    return 0;
}
