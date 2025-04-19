#include<stdio.h>

int main(){

        char str[100];
        int i;
    
        // Get input from user
        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin); //gets is unsafe so i used fgets
    
        // Convert to uppercase
        for(i = 0; str[i] != '\0'; i++) {
            if(str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;  
            }
        }
   
        printf("Uppercase string: %s", str);


    return 0;
}