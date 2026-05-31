#include<stdio.h>

int calculate_gst(float price);
int main(){

    int value;
   printf("Enter value :");
    scanf("%d",&value);

    calculate_gst(value);

    return 0;
}

int calculate_gst(float price){
    float gst = price + (price * 0.18);
    printf("With Gst = %.2f\n",gst);

    //float gst2 = price - (price / 18);
    //printf("without gst %.2f\n",gst2);
    
}