#include "main.h"

/**
* main - print its name and do not neeed to recomplie when passed a new name
* @argc: number agruments passed
* @argv: agrument vector array of agruments passed
*
* Return: int
*/

int main(int argc, char **argv)
{
int counter = 0;

for (; counter < argc; counter++)
{
	if (argc == 1)
		printf("%s\n", argv[counter]);
	else
		break;
}
return (0);
}
