#include <stdio.h>

// function prototypes
int gcd_non_recursive(int a, int b);
int gcd_recursive(int a, int b);

int main() {
    int a, b, gcd;
    
    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &a, &b);
    
    // calculate GCD using non-recursion
    gcd = gcd_non_recursive(a, b);
    printf("GCD of %d and %d (non-recursive): %d\n", a, b, gcd);
    
    // calculate GCD using recursion
    gcd = gcd_recursive(a, b);
    printf("GCD of %d and %d (recursive): %d\n", a, b, gcd);
    
    return 0;
}

// function to calculate GCD using non-recursion
int gcd_non_recursive(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// function to calculate GCD using recursion
int gcd_recursive(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd_recursive(b, a % b);
    }
}
