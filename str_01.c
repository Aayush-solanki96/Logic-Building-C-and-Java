
// struct student {
//     char name[100];
//     int roll;
//     float cgpa;
// };
// void Student(){
//     struct student s1 ;

//     s1.cgpa=9.2;
//     s1.roll=12001;
//     //s1.name="Aayush";

//     strcpy(s1.name,"Aayush");

//     printf("Name = %s\n",s1.name);
//     printf("Roll = %d\n",s1.roll);
//     printf("CGPA = %.1f\n",s1.cgpa);

//     struct student s2;

//     s2.cgpa=9.7;
//     s2.roll=12003;
//     //s2.name="Aayush";

//     strcpy(s2.name,"Anshu");

//     printf("Name = %s\n",s2.name);
//     printf("Roll = %d\n",s2.roll);
//     printf("CGPA = %.1f\n",s2.cgpa);

// }

#include <stdio.h>
#include <string.h>

struct work
{
    char name[50];
    float cgpa;
};

int main()
{

    // Student();

    struct work a2;

    a2.cgpa = 8.4;
    strcpy(a2.name, "Anshu");

    printf("%s\n", a2.name);
    printf("%f\n", a2.cgpa);

    return 0;
}
