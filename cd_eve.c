#include <stdio.h>

int main() {
    int n;

    // This loop runs forever until we hit the 'break' command
    while (1) {
        printf("Enter a Natural number: ");

        // Step 1: Check if input is a number
        if (scanf("%d", &n) != 1) {
            printf("Error: That is not a number!\n");

            // Step 2: CLEAN THE BUFFER
            // This small loop eats the "abc" characters so scanf can try again
            while (getchar() != '\n'); 
            
            continue; // Go back of the while loop
        }

        // Step 3: Check if it's a Natural number (positive)
        if (n <= 0) {
            printf("Error: Natural numbers must be greater than 0.\n");
        } else {
            // Success! 
            break; // This exits the while loop
        }
    }

    printf("Great! You entered: %d\n", n);
    // Now you can print your even numbers here...
    
    return 0;
}