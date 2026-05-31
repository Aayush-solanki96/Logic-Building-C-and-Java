#include <stdio.h>

int main() {
    int n;
    int sum = 0; // Rule: Always initialize sum to 0

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    // Loop from 1 to N
    for(int i = 1; i <= n; i++) {
        sum = sum + i; // Adding each number to our total
    }

    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}