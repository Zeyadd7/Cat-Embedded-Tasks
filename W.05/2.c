#include<stdio.h>
int sum(int *,int *);
int main(){
int x,y;
printf("Enter X value : ");
scanf("%d",&x);
printf("Enter Y value : ");
scanf("%d",&y);
printf("Sum is : %d" ,sum(&x,&y));

    return 0;
}

int sum(int *px,int *py){

return *px+*py;
}