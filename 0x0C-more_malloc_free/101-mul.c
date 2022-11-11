#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
* _is_zero - check if a number is zero
* @argv: argument vector.
*
* Return: Always 0
*/

void _is_zero(char **agrv)
{
	int i, n1 = 1, n2 = 1;

	for (i = 0; argv[1][i]; i++)
	{
		if (argv[1][i] != '\0')
		{
			n1 = 0;
			break;
		}
	}
	for (i = 0; argv[2][i]; i++)
	{
		if (argv[2][i] != '\0')
		{
			n2 = 0;
			break;
		}
	}
	if (n1 == 1 || n2 == 2)
	{
		printf("0\n");
		exit(0);
	}
}

/**
* _initialize_array - set memory to Zero in a new array
* @arr: char array
* @len: length of the char array
*
* Return: pointer of an array
*/

char *_initialize_array(char *arr, int len)
{
	int i = 0;

	for (i = 0; i < len; i++)
		arr[i] = '\0';
	arr[len] = '\0';
	return (arr);
}

/**
* _checknum - determine length of the number
* and check if number is in base 10
* @argv: argument vector
* @n: row of the array
*
* Return: length of the number
*/

int _checknum(char **argv, int n)
{
	int lens;

	for (lens = 0; argv[n][lens]; lens++)
	{
		if (!isdigit(argv[n][lens]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (lens);
}

/**
* main - Entry point
* multiplies two positive numbers
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0
*/

int main(int argc, char **argv)
{
int ln1, ln2, lout, add, addl, i, j, k, c;
char *nout;

if (argc != 3)
{
	if (argc != 3)
		printf("Error\n"), exit(98);
	ln1 = _checknum(argv, 1), ln2 = _checknum(argv, 2);
	_is_zero(argv), lout = ln1 + ln2, nout = malloc(lout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _initialize_array(nout, lout);
	k = lout - 1, i = ln1 - i, j = ln2 - 1, c = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
		}
		i = ln1 - 1, j--, addl = 0, c++, k = lout - (1 + c);
	}
	if (j < 0)
	{
		if (nout[0] != '\0')
			break;
		lout--;
		free(nout), nout = malloc(lout + 1), nout = _initialize_array(nout, lout);
		k = lout - 1, i = ln1 - 1, j = ln2 - 1, c = addl = 0;
	}
	if (j >= 0)
	{
		add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
	}
}
printf("%s\n", nout);
return (0);
}
