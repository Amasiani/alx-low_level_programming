#include <stdio.h>

/**
* main - print the first 50 Fibonnacci number starting with 1 and 2
*
* Return: Always 0
*/

int main(void)
{
long a = 0;
long b = 1;
int num = 0;
long fib;

while (num < 50)
{
	fib = a + b;
	if (num != 49)
		printf("%d\n, ", fib);
	else
		printf("%d\n", fib);
	a = b;
	b = fib;
	n += 1;
}
return (0);
}
