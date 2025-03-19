#include<stdio.h>
int main(){
    int N;
    printf("Enter Array size  ");
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){//storing array data
        printf("Enter element NO.%d ",i);
            scanf("%d",&arr[i]); 

        }  
for(int i=0;i<N;i++){
int isUnique=1;
for(int j=0;j<N;j++){
    if(i!=j && arr[i]==arr[j])
    {
isUnique=0;//it's a duplicate
break;
    }

}
if(isUnique){
    printf("%d ",arr[i]);
}
}



    
return 0;

}