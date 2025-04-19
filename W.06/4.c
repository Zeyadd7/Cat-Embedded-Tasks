#include <stdio.h>

int main() {
    char str[100], ch;
    int i, found = 0;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); //gets is unsafe so i used fgets

    getchar();

    printf("Enter a character to find: ");
    scanf("%c", &ch);

    // Loop through the string to find first occurrence
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("Character '%c' found at index %d\n", ch, i);
            found = 1;
            break;
        }
    }

    // If character is not found
    if(!found) {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}
