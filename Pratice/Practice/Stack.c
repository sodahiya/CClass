#include <stdio.h>
struct StackArray {
  int top;
  int arr[20];
};

void push(struct StackArray *stack, int value) {
  stack->arr[stack->top +1] = value;
  stack->top++;
}

int pop(struct StackArray *stack) {
  int temp = stack->arr[stack->top];
  stack->top--;
  return temp;
}

int peek( struct StackArray *stack) {
  int temp = stack->arr[stack->top];
  return temp;
}

void print(struct StackArray stack) {
  for (int i = 0; i < stack.top+1; i++) {
    printf("%d ", stack.arr[i]);
  }
  printf("\n");
}

struct StackArray  reverse(struct StackArray *stack) {
  struct StackArray temp;
  temp.top = -1;

  while (stack->top > -1) {
    push(&temp, pop(stack));
  }

  return temp;
}

int sizeWithoutTop(struct StackArray *stack) {
  struct StackArray temp;
  temp.top = -1;


  int count = 0;
  while (stack->top > -1) {
    push(&temp, pop(stack));
    count++;
  }

  while (temp.top > -1) {
    push(stack, pop(&temp));
  }

  return count;
}



void main(){
  char str[] = "(a+b)*(c+d)";
  printf("%S\n", str);

  struct StackArray s;
  s.top = -1;

  push(&s, 10);
  print(s);
  push(&s, 20);
  print(s);
  push(&s, 30);
  print(s);

  printf("Peeked, top is : %d\n", peek(&s));

  printf("Size without top is %d\n", sizeWithoutTop(&s));
  print(s);

  struct StackArray r = reverse(&s);
  print(r);

}
