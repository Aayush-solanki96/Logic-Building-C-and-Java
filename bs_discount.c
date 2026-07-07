#include <stdio.h>

int main()
{
    double price;
    double dis;

    printf("Enter Amount : ");
    scanf("%lf", &price);

    if (price < 1000 && price > 0)
    {
        printf("Total Amount : %.2lf\n", price);
    }
    else if (price >= 1000 && price < 5000)
    {
        printf("Total Amount : %.2lf\n", price);
        printf("Total Amount with discount : %.2lf\n", price - (price / 10.0));
        printf("Today You saved  : %.2lf Rs\n", (price / 10));
    }
    else 
    {
        printf("Total Amount : %.2lf\n", price);
        printf("Total Amount with discount : %.2lf\n", price - (price / 20.0));
        printf("Today You saved  : %.2lf Rs\n", (price / 20));
    }

    return 0;
}