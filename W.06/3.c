#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); //gets is unsafe so i used fgets

    // Find length of the string
    length = strlen(str);

    // Print string in reverse
    printf("Reversed string: ");
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
