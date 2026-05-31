// #include<stdio.h>
// void armsg(int n);

// int main(){

//     int num;
//     printf("Enter number :");
//     scanf("%d",&num);

//     armsg(num);

//     return 0;
// }

// void armsg(int num){

//     int a = num % 10;
//     int b = (num % 100)/10;
//     int c = num / 100;

//     if ((a*a*a)+(b*b*b)+(c*c*c) == num ){
//          printf("Armstrong Number.");
//     }
//     else{
//         printf("Not an Armstrong number\n");
//         printf("As %d not equal to %d",(a*a*a)+(b*b*b)+(c*c*c),num);
//     }
// }


#include<stdio.h>
void armsg(int a,int b);

int main(){
    int x,y;

   // do{

    printf("Enter x :");
    scanf("%d",&x);

    printf("Enter y :");
    scanf("%d",&y);

    // }
    // while((99>x>1000)&&(99>y>1000));{
    //     printf("Invalid value\n");
     
    armsg(x,y);

    return 0;
}

void armsg(int x,int y){

    for(int i=x;i<=y;i++){
        int a = i % 10;
        int b = (i % 100)/10;
        int c = i /100;

        if((a*a*a)+(b*b*b)+(c*c*c)==i){
            printf("Amstrong number =%d\n",i);
        }
    }
    printf("programm finished");
}