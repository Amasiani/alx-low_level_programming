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
time_t;

srand((unsigned int) time_t(&t));

while (i < 2772)
{
	ran = rand() % 128;
	if ((i + ran) > 2772)
		break;
	i = i + ran;
	printf("%c", ran);
}
printf("%c\n", (277 - i));
return (0);
}
