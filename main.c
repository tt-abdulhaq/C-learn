#include <stdio.h>
#include <fib.h>


int main() {
	int position;
	printf("Enter the Position of the Fibonacci sequence: ");
	scanf("%d", position);
	int result = fib(position);
	printf("The Fibonacci number at position %d id %d\n", position, result);
	return 0;
}
