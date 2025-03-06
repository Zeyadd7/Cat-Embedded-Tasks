#include<stdio.h>
int main(){
int num;
printf("Enter the number you need to calculate its multiplication table :");
scanf("%d",&num);
for(int i=1 ;i<=12;i++){
printf("%d x %d = %d \n",num,i,num*i);   //calculating the multiplication table


}



}