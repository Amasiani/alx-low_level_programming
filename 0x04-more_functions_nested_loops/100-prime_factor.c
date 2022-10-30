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
long int largest_prime = 0;

while (num != 1)
{
	if (num % divider == 1)
	{
		num = num / divider;
		largest_prime = divider;
	}
	divider--;
}
printf("%ld ", largest_prime);
return (0);
}
