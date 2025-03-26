#include <stdio.h>

// Tail-recursive Fibonacci function
long long fibonacci_tail(int n, long long a, long long b) {
    if (n == 0) return a;
    if (n == 1) return b;
    return fibonacci_tail(n - 1, b, a + b);
}

// Wrapper function for better usability
long long fibonacci(int n) {
    return fibonacci_tail(n, 0, 1);
}

int main() {
    int n = 5;

    printf("The 5th no is %lld",fibonacci_tail(n-  1,0,1));




    return 0;
}
