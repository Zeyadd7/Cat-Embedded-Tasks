#include<stdio.h>
int main(){
int num1,num2,num3;
printf("Enter number1 :");
scanf("%d",&num1);  //storing numbers from user 

printf("\nEnter number 2 :");
scanf("%d",&num2);  
printf("\nEnter number 3 :");
scanf("%d",&num3);
if (num1>num2){
    if (num1>num3){
        printf("%d is the maximum value",num1);
    }else{
        printf("%d is the maximum value",num3);

     }
}else if(num2>num3){
    printf("%d is the maximum value",num2);

}else {
    printf("%d is the maximum value",num3);

}
}