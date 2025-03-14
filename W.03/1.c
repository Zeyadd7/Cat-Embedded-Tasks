#include<stdio.h>

int Get_max(int,int);
int main(){
int x,y;
printf("Enter the first number : ");
scanf("%d",&x); //taking the first argument
printf("Enter the second number : ");
scanf("%d",&y); //taking the  second argument

Get_max(x,y);

}
int Get_max(int x,int y){
if(x>y){//checking the greatest
    printf("%d is the greater ",x);
}else{
    printf("%d is the greater ",y);
return 0;
}


}