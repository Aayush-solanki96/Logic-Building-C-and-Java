#include <stdio.h>
int main()
{
    double c, f, k;
    printf("Enter temperature( in celsius): ");
    scanf("%lf", &c);

    f = ((9.0 / 5.0) * c) + 32;
    k = c + 273.15;
    printf("Celsius = %.2lf\n", c);
    printf("Farahenite = %.2lf\n", f);
    printf("kelvin = %.2lf\n", k);

    
    return 0;
}