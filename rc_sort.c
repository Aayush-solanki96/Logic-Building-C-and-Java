/* #include <stdio.h>

// Helper Function: Inserts a digit into its correct mathematical position 
// within an already sorted number.
int insert_digit(int sorted_num, int digit) {
    // Base Case: If the sorted number is 0, simply return the digit
    if (sorted_num == 0) {
        return digit;
    }

    int last_digit = sorted_num % 10;

    // If the new digit is greater than or equal to the last digit of our 
    // sorted number, it mathematically belongs at the very end.
    if (digit >= last_digit) {
        return sorted_num * 10 + digit;
    }

    // Otherwise, temporarily peel off the last digit, recursively insert 
    // the new digit into the remaining front part, and then append the 
    // peeled-off digit back to the end.
    return insert_digit(sorted_num / 10, digit) * 10 + last_digit;
}

// Main Recursive Function: Breaks down the unsorted number digit by digit.
int sort_number(int num) {
    // Base Case: Any single-digit number (0 to 9) is already sorted.
    if (num < 10) {
        return num;
    }

    // Peel off the last digit, recursively sort the rest of the number,
    // and then insert that peeled-off digit into the freshly sorted result.
    return insert_digit(sort_number(num / 10), num % 10);
}

int main() {
    int input_num = 35142;
    
    printf("Original Number: %d\n", input_num);
    
    int sorted_num = sort_number(input_num);
    
    printf("Sorted Number:   %d\n", sorted_num);
    
    return 0;
} */



#include <stdio.h>

// Helper Function: Inserts a digit into its correct mathematical position
int insert_digit(int sorted_num, int digit) {
    // If the sorted part is empty (0), just return the digit itself
    if (sorted_num == 0) {
        return digit;
    }

    int last_digit = sorted_num % 10;

    // If the new digit belongs at the very end
    if (digit >= last_digit) {
        return sorted_num * 10 + digit;
    }

    // Otherwise, find the correct place deeper inside, then put last_digit back
    return insert_digit(sorted_num / 10, digit) * 10 + last_digit;
}

// Main Recursive Function: Breaks down the number digit by digit
int sort_number(int num) {
    // Base Case: A single-digit number is already sorted
    if (num < 10) {
        return num;
    }

    // Peel off the last digit, sort the rest, then insert the last digit
    int sorted_rest = sort_number(num / 10);
    return insert_digit(sorted_rest, num % 10);
}

int main() {
    int input_num = 35142;
    
    printf("Original Number: %d\n", input_num);
    
    int sorted_num = sort_number(input_num);
    
    printf("Sorted Number:   %d\n", sorted_num);
    
    return 0;
}