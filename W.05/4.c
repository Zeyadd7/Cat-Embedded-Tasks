#include<stdio.h>

int bubble_sort(int *arr,int N){

    int temp;
    for(int i=0;i<N-1;i++){
    
        for(int j=0;j<N-i-1;j++){
            if ( *(arr+j) < *(arr+j+1)){
    temp=*(arr+j);
    *(arr+j) = *(arr+j+1);
    *(arr+j+1) = temp;
            }
    }
}
for (int i = 0; i < 5; i++)
{
    printf("%d  ",*(arr + i));
}


}

void fill(int ar[],int n){
    for(int i=0;i<n;i++){
        printf("ENter element NO. %d ",i+1);
        scanf(" %d", &ar[i]);
    }}
int main(){
    int N;
    printf("Enter size of array ");
    scanf(" %d",&N);
    int arr[N];
    fill(arr,N);
 bubble_sort(arr,N);
   



    return 0;
}