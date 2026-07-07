#include<stdio.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main(){

    struct student s1 = { "Aayush",387,9.3};
    printf("Student name = %s\n",s1.name);

}