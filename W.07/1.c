#include<stdio.h>
int main(){
    struct empolyee
    {
int salary,bonus,deduction;
    }Mohesn,Maged,Mariam;
    printf("Enter Mohsen salary");
    scanf("%d",&Mohesn.salary);
    printf("Enter Mohsen bonus");
    scanf("%d",&Mohesn.bonus);
    printf("Enter Mohsen deduction");
    scanf("%d",&Mohesn.deduction);
    printf("Enter Mohsen total salary : %d",(Mohesn.salary+Mohesn.bonus-Mohesn.deduction));
    
    
    
    
    
    return 0;
}