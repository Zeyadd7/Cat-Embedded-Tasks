#include<stdio.h>
int main(){
int f=1,num,i=0;
printf("Enter the number : ");
scanf("%d",&num);
while(num!=0){//calculating the factorial 

f*=num;
num--;
i++;
}

printf("The factorial of %d is  : %d",i,f);

}