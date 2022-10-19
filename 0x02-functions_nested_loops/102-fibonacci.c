#include <stdio.h>

/**
* main - print the first 50 Fibonnacci number starting with 1 and 2
*
* Return: Always 0
*/

int main(void)
{
long int a = 1;
long int b = 2;
int num = 0;
long fib;

while (num < 50)
{
	fib = a + b;
	if (num != 49)
		printf("%ld\n, ", fib);
	else
		printf("%ld\n", fib);
	a = b;
	b = fib;
	num += 1;
}
return (0);
}
