#include "main.h"

/**
* reverse_array - reverse the content of an arraty of  integer
*
* @a: pointer of array
* @n: number of elements in  array
* Return: 0
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *str, *fini;
	int res = 0;

	str = a;
	fini = a;
	--n;

	while (i < n)
		i += 1;
	while (j <= i)
	{
		res = *(fini + j);
		*(str + j) = *(fini + i);
		*(fini + i) = res;
		j++;
		i--;
	}
}
