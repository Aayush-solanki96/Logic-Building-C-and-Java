#include<stdio.h>
#include<math.h>
int main(){

    float a,b,c;
    float dis;
    printf("Enter a :");
    scanf("%f",&a);

    printf("Enter b :");
    scanf("%f",&b);

    printf("Enter c :");
    scanf("%f",&c);

    dis = (b*b) - 4*a*c;
    if (dis<0){
        printf("Quadratic equations have Imaginary roots.\n");
    }
    else if(dis==0){
         float x;
        dis=sqrt(dis);
        x=(-b)/2*a;
        printf("Quadratic equations have two equal roots and roots are %.2f.\n",x);
    }
    else if(dis>0){
        float x,y;
        dis=sqrt(dis);
        x=((-b)+dis)/2*a;
        y=((-b)-dis)/2*a;

        printf("Roots of quadratic equations are %.2f and %.2f.",x,y);
    }
    return 0;
}