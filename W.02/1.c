#include<stdio.h>
int main (){
int salary,hours,hour_rate=50,deduction;
printf("Enter your working hours :");
scanf("%d",&hours);
if (hours < 40){
//check if we need to calculate a deduction
deduction=hour_rate-hour_rate/10;

salary=hours*deduction;

}else {
salary=hour_rate*hours;

}
printf("Employee salary is : %d",salary);


}