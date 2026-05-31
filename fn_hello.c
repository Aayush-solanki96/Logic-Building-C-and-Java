#include<stdio.h>
//declaration/prototype 
void hello();

int main(){
    
    hello(); //function call

    for(int i=1;i<=5;i++){
        hello();
    }

return 0;
}
// function definition
void hello(){
    printf("Hello!\n");
}