#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int prec(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}

void reverse(char *exp) {
    int len = strlen(exp);
    int i = 0, j = len - 1;
    while (i < j) {
        char temp = exp[i];
        exp[i] = exp[j];
        exp[j] = temp;
        i++, j--;
    }
}

void infixToPrefix(char* exp) {
    int len = strlen(exp);
    char result[len + 1];
    char stack[len];
    int j = 0, top = -1;

    // Reverse the infix expression
    reverse(exp);

    for (int i = 0; i < len; i++) {
        char c = exp[i];

        if (c == '(')
            exp[i] = ')';
        else if (c == ')')
            exp[i] = '(';
    }

    for (int i = 0; i < len; i++) {
        char c = exp[i];

        if (isalnum(c))
            result[j++] = c;
        else if (c == '(')
            stack[++top] = '(';
        else if (c == ')') {
            while (top != -1 && stack[top] != '(') {
                result[j++] = stack[top--];
            }
            top--;
        } else {
            while (top != -1 && (prec(c) < prec(stack[top]) || (prec(c) == prec(stack[top]) && c != '^'))) {
                result[j++] = stack[top--];
            }
            stack[++top] = c;
        }
    }

    while (top != -1) {
        result[j++] = stack[top--];
    }

    result[j] = '\0';

    reverse(result);
    printf("%s\n", result);
}

int main() {
    char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
    infixToPrefix(exp);

    char exp2[] = "(p+q)*(m-n)";
    infixToPrefix(exp2);

    return 0;
}
