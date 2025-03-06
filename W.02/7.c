#include<stdio.h>
int main(){
int sum=0,num;
float avg;
for(int i=1;i<=10;i++){  //entering all numbers
printf("Enter number no.%d :",i);
scanf("%d",&num);
sum+=num;  //summing the numbers 
}
avg=(float)sum/10;
printf("The sum of numbers is : %d \n",sum);
printf("The average of numbers is : %f",avg);



}