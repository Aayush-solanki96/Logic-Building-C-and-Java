// #include<stdio.h>
// int main(){
//     int unit;

//     printf("Enter units consumed :");
//     scanf("%d",&unit);

//     if(unit<0){
//     printf("Invalid units.");
//     }
//     else if (unit>=0 && unit<=100){
//         printf("You used %d units ,and your bill is %d rupees .\n",unit,unit*5);
//         printf("Thank you");
//     }
//     else if (unit>100 && unit<=200){
//         printf("You used %d units ,and your bill is %d rupees .\n",unit,unit*7);
//         printf("Thank you");
//     }
//      else if (unit>200){
//         printf("You used %d units ,and your bill is %d rupees .\n",unit,unit*10);
//         printf("Thank you");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{

    double units;
    double remaining_units;

    printf("Enter units : ");
    scanf("%lf", &units);

    if (units < 0)
    {
        printf("Invalid units !");
    }
    else if (units > 0 && units < 100)
    {
        printf("Your electricity bill is %.2lf", units * 5.0);
    }
    else if (units >= 100 && units < 300)
    {
        int x = units, y;
        remaining_units = x % 100;
        y = units / 100;
        printf("Your electricity bill is %.2lf", (y * 100 * 5.0) + (remaining_units * 7.0));
    }
    else
    {
        printf("Your electricity bill is %.2lf", units * 10.0);
    }
    return 0;
}