// #include<stdio.h>
// void reverse(int n);
// int main(){

//     int num;
//     printf("Enter nuumber :");
//     if(scanf("%d",&num ) != 1){
//         printf("Invalid input \n");
//         return 1;
//     }
   
//     reverse(num);

//     return 0;
// }

// void reverse(int num){
//     if ( num  == 0 ){return;}
//     int last_digit = num % 10 ;
//     printf("%d",last_digit );
//     reverse(num/10);
// }



#include<stdio.h>
void reverse(int n);

int main(){

    int num;
    printf("Enter number :");
    scanf("%d",&num);
    reverse(num);

    return 0;
}

void reverse(int num){
    if (num == 0){
        // printf("0");
        return;
    }
    int last_digit = num %10;
    printf("%d",last_digit);
    reverse(num/10);
}