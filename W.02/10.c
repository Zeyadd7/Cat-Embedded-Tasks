#include<stdio.h>
#include<string.h>
#define crctpass "hello123"
#define ID 12345

int main(){
char pass[50];
int userID;
//Asking for personal information 
printf("Enter your ID :");
 scanf("%d",&userID);
  
 if(userID!=ID){
    printf("Invalid user you are not registered");
    return 0;
 }
for(int tries=0;tries<3;tries++){
printf("Enter your password : "); //asking for pass to check
scanf("%49s",pass);
if(strcmp(pass,crctpass)==0){
    printf("Welcome");
    return 0;
}
printf("Enter your password again  \n"); 

}

printf("No more tries");


}