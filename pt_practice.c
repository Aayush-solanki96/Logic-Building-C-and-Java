#include <stdio.h>

int main()
{

    int i = 72;
     int *j = &i;
    printf("The address is %d\n", i);        //72
    printf("The address is %d\n", *(&i));   //72
    printf("The address is %d\n", *j);      //72
    printf("The address is %d\n", **(&j));  //72
    printf("The address is %d\n", **(&j));  //72

   
  

    return 0;
}