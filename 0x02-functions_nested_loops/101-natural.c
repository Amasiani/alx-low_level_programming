#include "main.h"

/**
* main - program tat compute and print the sum of all
* mutiple of 3 or 5 below 1024
*
* Return: Always 0
*/

int main(void)
{
int multiple = 0;
int result = 0;
while (multiple < 1024)
{
	if (multiple % 3 == 0 || multiple % 5 == 0)
	{
		result += multiple;
	}
printf("%d\n", result);
return (0);
}
}
