#include<stdio.h>
void generateTable(int tables[][11],int rows,int col);
void printTables(int table[][11],int rows,int col);
int main(){
    //declare an 2D array
    int tables[11][11];

    //Call the function to make table 
    generateTable(tables,2,10);

    //Call the function to display the array 
    printTables(tables,2,10);
    
   
    return 0;
    
    }

void generateTable(int table[][11],int rows,int col){
    int i,j;
    for(i=1;i<=rows;i++){
        for(j=1;j<=col;j++){
            table[i][j] = i*j;
        }
    }
}

void printTables(int table[][11],int rows,int col){
    int i,j;
     for(i=1;i<=rows;i++){
        for(j=1;j<=col;j++){
            printf("%d \t",table[i][j]);
        }
        
        printf("\n");
    }
    
}

