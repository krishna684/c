#include <stdio.h>

int main() {
    int a, b;
    int *ptr1, *ptr2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    ptr1 = &a;  // initialize pointer ptr1 with the address of variable a
    ptr2 = &b;  // initialize pointer ptr2 with the address of variable b

    if (*ptr1 > *ptr2) {
        printf("%d is the biggest number\n", *ptr1);  // dereference ptr1 to get the value of a
    } else {
        printf("%d is the biggest number\n", *ptr2);  // dereference ptr2 to get the value of b
    }

    return 0;
}
