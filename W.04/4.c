#include<stdio.h>
int Repeated(int arr[],int N){

   for(int i=0;i<N;i++){//storing array data
        printf("Enter element NO.%d ",i);
            scanf("%d",&arr[i]); 

        }  

    for(int i=0;i<N;i++){
        int isRepeated=0;
        for(int j=0;j<N;j++){
            if(i!=j && arr[i]==arr[j])
            {
        isRepeated=1;//it's a duplicate
        break;
            }
        
        }
        if(isRepeated){
           printf("%d ",arr[i]);
}}}

int main(){


    int N;
    printf("Enter Array size  ");
    scanf("%d",&N);
    int arr[N];
 Repeated(arr,N);



    return 0;
}