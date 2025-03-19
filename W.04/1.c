#include<stdio.h>
int main(){

    int N,order;
    printf("Enter Array size  ");
    scanf("%d",&N);
    int arr[N];
    
for(int i=0;i<N;i++){//storing array data
printf("Enter element NO.%d ",i);
    scanf("%d",&arr[i]); 
}  
printf("Enter 0 if you want array in ascending and 1 for descending.");
scanf("%d",&order);
int temp;
for(int i=0;i<N-1;i++){

    for(int j=0;j<N-i-1;j++){
if(order==0 && arr[j] > arr[j+1]){//swapping ascending 
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;

}else if (order==1 && arr[j] < arr[j+1])
{//swapping descending
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
}



    }

}
for (int i = 0; i < N; i++)
{//printing the array
    printf("%d ",arr[i]);
}
return 0;

}




