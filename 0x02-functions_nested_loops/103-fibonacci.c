#include <stdio.h>

/**
* main - print the sum of even terms in Fibonacci sequence
* nit exceeding 4,000,000
*
* Return: Always 0
*/
int main(void)
{
int a = 1;
int b = 2;
int count = 0;
int result;
int fibonacci;

while (count < 4000000)
{
	fibonacci = a + b;
	result =  fibonacci % 2;
	if (result == 0)
	{
		result += result;
		printf("%d\n", result);
	}
	count++;
}
}
