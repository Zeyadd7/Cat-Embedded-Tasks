#include<stdio.h>
int main(){
int x=80,y=90,z=100,*px,*py,*pz;
 px=&x;
 py=&y;
 pz=&z;

 printf("Before swapping pointers:\n");
 printf("x = %d, y = %d, z = %d\n", x, y, z);
 printf("px = %p, py = %p, pz = %p\n", px, py, pz);
 printf("*px = %d, *py = %d, *pz = %d\n", *px, *py, *pz);

 printf(" swapping pointers:\n");

 pz = px; 
 px = py;
 py = pz;
 printf("After swapping pointers:\n");
 printf("x = %d, y = %d, z = %d\n", x, y, z);
 printf("px = %p, py = %p, pz = %p\n", px, py, pz);
 printf("*px = %d, *py = %d, *pz = %d\n", *px, *py, *pz);
    return 0;
}