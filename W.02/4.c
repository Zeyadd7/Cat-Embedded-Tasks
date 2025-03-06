#include<stdio.h>
int main(){
int grade;
 printf("Enter your grade :");
 scanf("%d",&grade);   //entering the argue from the user 

 if(grade > 85){ //checking the grade
    printf("Excellent");
 }else if (grade>70){
    printf("Very Good");
 }else if (grade>50){
    printf("Good");
 }else{
    printf("Failed");
 }


}