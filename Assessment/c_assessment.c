#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000

// Function to reverse a string
void reverse(char *str) {
      int len = strlen(str);
    for (int i = 0, j = len - 1; i <= j; i++, j--) {
      
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
}

// Function to concatenate two strings
void concatenate(char *str1, char *str2) {
    strcat(str1, str2);
}

// Function to check if a string is a palindrome
int Palindrome(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; 
        }
    }
    return 1; 
}

// Function to copy a string
void copy(char *destination, char *source) {
    strcpy(destination, source);
}

// Function to find the length of a string
int length(char *str) {
    return strlen(str);
}

// Function to find the frequency of a character in a string
int frequency(char *str, char ch) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

// Function to count the number of vowels and consonants in a string
void VowelsAndConsonants(char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
            (*vowels)++;
        } else if (isalpha(str[i])) {
            (*consonants)++;
        }
    }
}

// Function to count the number of blank spaces and digits in a string
void SpacesAndDigits(char *str, int *spaces, int *digits) {
    *spaces = 0;
    *digits = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isspace(str[i])) {
            (*spaces)++;
        } else if (isdigit(str[i])) {
            (*digits)++;
        }
    }
}

int main() {
    char str1[MAX_LENGTH];
    char str2[MAX_LENGTH];
    char temp[MAX_LENGTH];
    int choice;
    int vowels, consonants, spaces, digits;
    char ch;
    
    // Main loop for the menu-driven program
    while (1) {
        printf("\n Main Menu\n");
        printf("1. Reverse\n");
        printf("2. Concat\n");
        printf("3. Palindrome\n");
        printf("4. string Copy\n");
        printf("5. Length\n");
        printf("6. Frequency \n");
        printf("7. vowels and consonants\n");
        printf("8. blank spaces and digits\n");
        printf("9. Exit\n");
        printf("Please Enter your choice: ");
        scanf("%d", &choice);
        
        // Process the user's choice
        switch (choice) {
            case 1: // Reverse a string
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                reverse(str1);
                printf("Reversed string: %s\n", str1);
                break;
                
            case 2: // Concatenation
                printf("Enter the first string: ");
                scanf(" %[^\n]", str1);
                printf("Enter the second string: ");
                scanf(" %[^\n]", str2);
                concatenate(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;
                
            case 3: // Palindrome
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                if (Palindrome(str1)) {
                    printf("The string is a palindrome.\n");
                } else {
                    printf("The string is not a palindrome.\n");
                }
                break;
                
            case 4: // Copy a string
                printf("Enter the source string: ");
                scanf(" %[^\n]", str1);
                copy(temp, str1);
                printf("Copied string: %s\n", temp);
                break;
                
            case 5: // Length of the string
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                printf("Length of the string: %d\n", length(str1));
                break;
                
            case 6: // Frequency of character in a string
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                printf("Enter the character to find the frequency of: ");
                scanf(" %c", &ch);
                printf("Frequency of '%c': %d\n", ch, frequency(str1, ch));
                break;
                
            case 7: // Find number of vowels and consonants
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                VowelsAndConsonants(str1, &vowels, &consonants);
                printf("Number of vowels: %d\n", vowels);
                printf("Number of consonants: %d\n", consonants);
                break;
                
            case 8: // Find number of blank spaces and digits
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                SpacesAndDigits(str1, &spaces, &digits);
                printf("Number of blank spaces: %d\n", spaces);
                printf("Number of digits: %d\n", digits);
                break;
               
            case 9: // Exit
                printf("Exit\n");
                return 0;
                
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    
    return 0;
}
