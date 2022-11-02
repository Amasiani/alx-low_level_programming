#include "main.h"

/**
* print_diagsums - print the sum of two numbers of two diagonal square matrix
* @a: integer to check
* @size: size of integer
*/

void print_diagsums(int *a, int size)
{
	int i, j;
	int totalA = 0;
	int totalB = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		totalA = tottalA + a[i];
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		totalB = totalB + a[n];
	printf("%d", "%d\n", totalA, totalB);
}
