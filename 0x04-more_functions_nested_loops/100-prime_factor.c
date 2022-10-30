#include <stdio.h>

/**
* main - print the largest factor of a number
* 612852475143
* Return: Zero
*/

int main(void)
{
long int num = 612852475143;
long int divider = 2;

for  (; divider <= n; divider++)
{
	if (num % divider == 0)
	{
		num /= divider;
		divider--;
	}
}
printf("%ld ", divider);
return (0);
}
