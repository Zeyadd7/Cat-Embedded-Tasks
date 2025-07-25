#include<stdio.h>
#define static_Max 10
 typedef struct
 {
   int arr[static_Max];
   int top;
 }static_stack;

 void initstack(static_stack *s){
    s->top=-1;
 }
 
 int pushStatic(static_stack *s, int value) {
    if (s->top >= static_Max - 1) {
        printf("Static Stack Overflow\n");
        return 0;
    }
    s->arr[++(s->top)] = value;
    return 1;
}
int popStatic(static_stack *s, int *value) {
    if (s->top == -1) {
        printf("Static Stack Underflow\n");
        return 0;
    }
    *value = s->arr[(s->top)--];
    return 1;
}

// Peek
int peekStatic(static_stack *s, int *value) {
    if (s->top == -1) return 0;
    *value = s->arr[s->top];
    return 1;
}
int main(){

    static_stack staticS;
    initstack(&staticS);
    pushStatic(&staticS, 10);
    pushStatic(&staticS, 20);

    int val;
    popStatic(&staticS, &val);
    printf("Static Stack popped: %d\n", val);





    return 0;
}