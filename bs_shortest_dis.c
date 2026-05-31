#include<stdio.h>
#include<math.h>
int main(){

    double x1,y1;
    printf("Enter x1 and y1 coordlinates(seperated by space);");
    scanf("%lf %lf",&x1,&y1);

    double x2,y2;
    printf("Enter x2 and y2 coordlinates(seperated by space);");
    scanf("%lf %lf",&x2,&y2);

    double distance,a,b;

    a=x2-x1;
    b=y2-y1;
    distance=a*a + b*b;
    distance=sqrt(distance);

    printf("Distance between given points is : %.2lf units",distance);

    return 0;

}