#include<stdio.h>
int main(){
    int ID;
    printf("Enter your ID :");
    scanf("%d",&ID);
    switch (ID)
    {
        //checking th ID 
    case 1234: printf("Harry");
        
        break;
        case 5678:printf("Ron");

        break;
        case 1145:printf("Hermione");
        break;
    
    default:printf("Wrong ID");
        break;
    }


    
}