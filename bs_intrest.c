#include<stdio.h>
#include<math.h>

int main(){
    double p,r,t,a,c;

    printf("Enter principal value : ");
    scanf("%lf",&p);

    printf("Enter Annual interest rate : ");
    scanf("%lf",&r);

    printf("Enter time (in years) :");
    scanf("%lf",&t);

    double x;
    x = pow((1+(r/100)),t);
    a = p * x;
    c = a - p;

    printf("Compound intrest is %.2lf",c);

    return 0;

}