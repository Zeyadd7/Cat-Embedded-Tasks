#include <stdio.h>

#define DYNAMIC_MAX 100  
#define DYNAMIC_INIT 5   

typedef struct {
    int arr[DYNAMIC_MAX];
    int top;
    int capacity;
} DynamicStack;

void initDynamicStack(DynamicStack *s) {
    s->top = -1;
    s->capacity = DYNAMIC_INIT;
}

int pushDynamic(DynamicStack *s, int value) {
    if (s->top >= s->capacity - 1) {
        if (s->capacity * 2 <= DYNAMIC_MAX) {
            s->capacity *= 2;
            printf("Dynamic Stack Resized to %d\n", s->capacity);
        } else {
            printf("Dynamic Stack Overflow (max limit reached)\n");
            return 0;
        }
    }
    s->arr[++(s->top)] = value;
    return 1;
}

int popDynamic(DynamicStack *s, int *value) {
    if (s->top == -1) {
        printf("Dynamic Stack Underflow\n");
        return 0;
    }
    *value = s->arr[(s->top)--];
    return 1;
}

int peekDynamic(DynamicStack *s, int *value) {
    if (s->top == -1) return 0;
    *value = s->arr[s->top];
    return 1;
}

int main() {
    int val;
    DynamicStack dynamicS;
    initDynamicStack(&dynamicS);
    for (int i = 1; i <= 20; ++i) {
        pushDynamic(&dynamicS, i * 10);
    }

    popDynamic(&dynamicS, &val);
    printf("Dynamic Stack popped: %d\n", val);

    return 0;
}
