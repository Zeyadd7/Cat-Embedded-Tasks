#include<stdio.h>
int main(){

int arr[5][5]={0},sum=0;
for(int i=0 ; i<5;i++){
   printf("Enter element in Row NO. %d : ",i+1);

for (int j = 0; j < 5; j++)
{
   scanf("%d",&arr[i][j]);
}

}
printf("Row Total :");
for(int i=0 ; i<5;i++){
    for (int j = 0; j < 5; j++)
    {
     sum+=arr[i][j];

    }
    printf("%d ",sum);
    sum=0;

}
printf("\n Coloumb Total :");
for(int i=0 ; i<5;i++){
    for (int j = 0; j < 5; j++)
    {
     sum+=arr[j][i];
    }
    printf("%d ",sum);
    sum=0;

}
    return 0;
}