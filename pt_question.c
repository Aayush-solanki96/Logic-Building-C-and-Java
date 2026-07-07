#include <stdio.h>

int main()
{

    int age;
    printf("Enter age = ");
    scanf("%d", &age);
    char name = 'A';
    int *ptr = &age;

   //printf("%p\n",&age);
   printf("%u\n",&age);
   printf("%d\n",age);
   printf("%u\n",&ptr);
   printf("%u\n",ptr);
    return 0;
}