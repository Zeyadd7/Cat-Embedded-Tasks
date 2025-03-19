#include<stdio.h>
#include <limits.h>

int main(){
    int N,max=INT_MIN;
    printf("Enter Array size  ");
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){//storing array data
        printf("Enter element NO.%d ",i);
            scanf("%d",&arr[i]); 
        }  
        int temp;
        for(int i=0;i<N-1;i++){
        
            for(int j=0;j<N-i-1;j++){
                if ( arr[j] < arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
                }
        }
    }
printf("The second largest is %d",arr[1]);
return 0;
}

        