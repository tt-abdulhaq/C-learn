#include <stdio.h>
#include "fib.h" // Use double quotes for custom headers.

int main() {
    int position;
    printf("Enter the position of the Fibonacci sequence: ");
    scanf("%d", &position);

    int result = fib(position);
    printf("The Fibonacci number at position %d is %d\n", position, result);
    return 0;
}
