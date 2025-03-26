#include <stdio.h>

struct stack{
    int valuses[10];
    int top;
};

void printStack(struct stack s) {
    printf("Stack : ");
    for (int i =0;i<s.top;i++) {
        printf("%d ",s.valuses[i]);
    }
    printf("\n");
}

struct stack createStack(){
    struct stack s;
    s.top = 0;
    return s;
}


struct stack push(struct stack s,int value){
    s.valuses[s.top] = value;
    s.top +=1;
    return s;
}

struct stack pop(struct stack s){
    s.valuses[s.top] = 0;
    s.top -=1;
    return s;
}


void main(){
    struct stack s = createStack();
    
    int arr[] = {10,20,30,40,50};
    for (int i =0 ;i<5;i++){
        s = push(s,arr[i]);
        printStack(s);
    }

    s = pop(s);
    printStack(s);
    s = pop(s);
    printStack(s);
}