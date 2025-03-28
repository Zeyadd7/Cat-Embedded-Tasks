#include<stdio.h>
int main(){
int x=10;

printf("X= %d",x);
int *p=&x;
*p=20;
printf("\nX= %d",x);

    return 0;
}