#include<stdio.h>
#include<math.h>

int main(){

    double a,b,c;

    printf("Enter length of side a :");
    scanf("%lf",&a);

    printf("Enter length of side b :");
    scanf("%lf",&b);

    printf("Enter length of side c :");
    scanf("%lf",&c);

    if((a+b>c)&&(b+c>a)&&(a+c>b)){

    //Calculating semi perimeter of triangle .
    
    double s; 
    s = (a + b + c)/2 ;
    
    double Area ;

    Area = s*(s-a)*(s-b)*(s-c);

    Area = sqrt(Area);

    printf("Area of triangle is %.2lf unit%c", Area,253 );
    }

    else {
        printf("These sides do not form a valid triangle !");
    }

    return 0;
}