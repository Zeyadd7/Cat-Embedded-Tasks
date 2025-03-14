#include<stdio.h>
#include<string.h>
#define crctpass "hello123"
#define ID 12345
int userID;
char pass[50];

int login();
int main(){
    //Asking for personal information 
    printf("Enter your ID :");
     scanf("%d",&userID);
    
login(userID);


}
int login(int x){
int i=0;
int isEqual = 1;
    if(userID!=ID){
        printf("Invalid user you are not registered");
        return 0;
     }
    for(int tries=0;tries<3;tries++){
    printf("Enter your password : "); //asking for pass to check
    scanf("%49s",pass);
    while (pass[i] != '\0' || crctpass[i] != '\0') {
        if (pass[i] != crctpass[i]) {
            isEqual = 0;  // Strings are not equal
            break;
        }
        i++;
    }
    if(isEqual=1){//checking the pass
        printf("Welcome");
        return 0;
    }
    printf("Enter your password again  \n"); 
    
    }
    
    printf("No more tries");
    
}