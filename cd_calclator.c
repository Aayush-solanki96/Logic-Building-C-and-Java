#include<stdio.h>
int main(){
 
    int a,b;
    char op;
    int choice;

    do{
        printf("Enter a & b (seperated by space):");
        scanf("%d %d",&a,&b);

    printf("Enter operand ( + , - , * , / ) :");
    scanf(" %c",&op);

    switch(op){

    case '+' : printf("Sum of %d and %d is %d.\n",a,b,a+b); 
    break;

    case '-' : printf("Difference of %d and %d is %d.\n",a,b,a-b);
    break;

    case '*' : printf("Multiplication of %d and %d is %d.\n",a,b,a*b);
    break;

    case '/' : if(b != 0){
         printf("Division of %d and %d is %.2f.\n",a,b,(float)a/b);
        }
        else{
            printf(" Infinite");
        }
    break;

    default: printf("Error : Invalid operator.\n");

    }
    do{
    printf("Press 2 for repeat or 1 for exit. ");
    scanf(" %d",&choice);
    }
    while(choice != 2 && choice != 1);
}
while(choice == 2);
printf("Thank you for using the calculator ! Good Bye .");

return 0;
}