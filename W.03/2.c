#include<stdio.h>
int swap(int,int); //declaring the function 
int x,y;
int main(){
printf("Enter first number : ");
scanf("%d",&x);
printf("Enter second number : ");
scanf("%d",&y);
printf("X= %d and Y= %d before swapping  \n ",x,y);
swap(x,y);



}
int swap(int x,int y){
int z; //making a variable to use as a vessel to swap arguments
z=x;
x=y;
y=z;
return printf("X= %d and Y= %d after swapping ",x,y);
}