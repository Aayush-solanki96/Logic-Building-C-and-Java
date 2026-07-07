#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    
    int n;
    printf("How many student's Data do you want to store ? : ");
    scanf("%d",&n);

    struct student ece[100];

    for (int i =0;i<n;i++){

        printf("Enter Details of studnet no: %d\n",i+1);

        printf("Enter Nmae : ");
        scanf("%s",ece[i].name);

        printf("Enter Roll No: ");
        scanf("%d",&ece[i].roll);

        printf("Enter CGPA : ");
        scanf("%f",&ece[i].cgpa);
        printf("\n");
 }
    
    for(int i=0;i<n;i++){
        
        
        printf("Name = %s\n",ece[i].name); 
        printf("Roll = %d\n",ece[i].roll); 
        printf("Cgpa = %.1f\n",ece[i].cgpa); 
        printf("\n");
    }

    return 0;
}