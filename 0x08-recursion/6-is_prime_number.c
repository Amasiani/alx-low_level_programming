#include "main.h"

/**
* is_prime_number - return 1 if input is a prime else return 0
* @n: value to check
*
* Return: int
*/

int is_prime_number(int n)
{
	 if (n <= 1)
		return (0);
	return (PrimNum(n, 2));
}

/**
* PrimNum - Checks for  prime number
* @n: value to check
* @i: iterator
*
* Return: int
*/

int PrimeNum(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + PrimNum(n, i + 1));
}
