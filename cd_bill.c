#include<stdio.h>
int main(){
    int unit;

    printf("Enter units consumed :");
    scanf("%d",&unit);

    if(unit<0){
    printf("Invalid units.");
    }
    else if (unit>=0 && unit<=100){
        printf("You used %d units ,and your bill is %d rupees .\n",unit,unit*5);
        printf("Thank you");
    }
    else if (unit>100 && unit<=200){
        printf("You used %d units ,and your bill is %d rupees .\n",unit,unit*7);
        printf("Thank you");
    } 
     else if (unit>200){
        printf("You used %d units ,and your bill is %d rupees .\n",unit,unit*10);
        printf("Thank you");
    }
    return 0;
}