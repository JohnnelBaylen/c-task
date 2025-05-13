#include <stdio.h>
#include <string.h>

int main() {
    
    char str[100], reverse[100];
    int len, i;

    printf("Enter a string: ");

    len = strlen(str);  // Get the length of the string

    for (i = 0; i < len; i++) {
        reverse[i] = str[len - i - 1];  // Copy characters from the end to the beginning
    }

    reverse[i] = '\0';  // End the reversed string with the null terminator

    printf("\n");
    printf("Reversed string: %s", reverse);

    return 0;
}
