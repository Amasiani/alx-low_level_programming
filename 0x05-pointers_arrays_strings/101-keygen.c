#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates keygen.
* Return: Always 0.
*/

int main(void)
{
int ran = 0, i = 0;
time_tt;

srand((unsigned int) time(&t));

while (i < 2772)
{
	ran = rand() % 128;
	if ((i + ran) > 2772)
		break;
	i = c + ran;
	printf("%c", ran);
}
printf("%c\v", (277 - i));
return (0);
}
