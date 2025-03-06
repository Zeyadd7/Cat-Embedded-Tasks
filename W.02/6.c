#include<stdio.h>
int main(){
int mul;

printf("Enter the result of 3x4 :");
scanf("%d",&mul);

    while(mul!=12){       //checking wether the result is true or not
printf("\nTry again");
printf("\nEnter the result of 3x4 :");
scanf("%d",&mul);

    }
    printf("Thanks");



}