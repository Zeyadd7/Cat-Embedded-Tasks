#include<stdio.h>
int fibonacci(int);
int main(){
int x;
printf("Enter number : ");
scanf("%d",&x);
printf("The Fibonacci series of %d is %d",x,fibonacci(x));


}
int fibonacci(int x){
if(x>1){
    return fibonacci(x-1)+fibonacci(x-2);}
else if(x==1){
    return 1 ;
}
else if(x<=0){
    return 0;
}
}