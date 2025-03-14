#include<stdio.h>
int digit_count(int);
int main(){
int x;
printf("Enter number : ");
scanf("%d",&x);
printf("Number of %d digits is %d ",x,digit_count(x));
}


int digit_count(int x){
int counter=0;
    for(int i=0;i<x;x/=10)
{
counter++;

}
return counter ;
}