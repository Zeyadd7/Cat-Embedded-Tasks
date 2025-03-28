#include<stdio.h>
int Mul(int *ar,int *a,int);
void fill(int ar[],int n){
    for(int i=0;i<n;i++){
        printf("ENter element NO. %d ",i+1);
        scanf(" %d", &ar[i]);
    }


}
int main(){
    int N;
    printf("Enter size of array ");
    scanf(" %d",&N);
int ar[N],a[N];    
printf("Enter first array \n");
fill(ar,N);
printf("Enter Second array \n");

fill(a,N);

printf("Result of scalar multipication is : %d" ,Mul(ar,a,N));


    return 0;
}


int Mul(int *ar,int *a,int size){
int result=0;
for(int i=0 ;i<size;i++){
   
    result+=*(ar+i) * *(a+i);

}
return result;

}