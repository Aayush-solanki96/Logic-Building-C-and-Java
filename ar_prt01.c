#include <stdio.h>
void reverse(int num[], int n);
void printArr(int num[], int n);
int main()
{

    int num[] = {1, 2, 3, 4, 5};
    reverse(num, 5);
    printArr(num, 5);

    return 0;
}
void printArr(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", num[i]);
    }
}
void reverse(int num[], int n){
    for (int i = 0; i < n / 2; i++)
    {
        int firstvalue = num[i];
        int secondvalue = num[n - i - 1];
        num[i] = secondvalue;
        num[n - i - 1] = firstvalue;
    }
}