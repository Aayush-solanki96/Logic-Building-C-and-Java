// #include <stdio.h>

// int main()
// {
//     // Checking for Prime number
//     int number;
//     int count = 0; // we use count for tracking how manu times a number divides by other small numbers

//     // taking input from user and store it to our number
//     printf("Enter number : ");
//     scanf("%d", &number);

//     // here our loop checks if any vlaue of i divides our number then it add +1 to count
//     for (int i = 1; i <= number; i++)
//     {
//         if (number % i == 0)
//         {
//             count++;
//         }
//     }

//     // As we know ,Prime no. is divided by itself and by 1 only
//     if (count <= 2)
//     {
//         printf("%d is an Prime number .\n", number);
//     }
//     else
//     {
//         printf("%d is not an Prime number .\n", number);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int num, sum = 0;
//     printf("Enter number : ");
//     scanf("%d", &num);

//     for (int i = 1; i <= num; i++)
//     {

//         if (i % 2 == 0)
//         {
//             sum = sum + i;
//         }
//     }
//     printf("Sum is %d", sum);

//     return 0;
// }

#include<stdio.h>

int main(){

int num;

printf("Enter number");
scanf("%d",&num);

for(int i = num;i>=1;i--){
	if(i==5){
continue;
}
printf("%d\n",i);
}
return 0;
}


// and that with this 