#include "variadic_functions.h"

/**
* print_integers - print integer
* @list: argument list
* @separator: string separator between integers
*
* Return: Always 0
*/

void print_integers(va_list list, char *separator)
{
	printf("%s%d", separator, va_arg(list, int));
}

/**
* print_characters - string charaters
* @list: argument list
* @separator: separator between characters
*
* Return: Always 0
*/

void print_characters(va_list list, char *separator)
{
	printf("%s%c", separator, va_arg(list, int));
}

/**
* print_strings - prints strings
* @list: list of arguments
* @separator: separator between strings
*
* Return: Always 0
*/

void print_strings(va_list list, char *separator)
{
	char *st;

	st = va_arg(list, char *);
	if (st == NULL)
	{
		st = "(nil)";
		printf("%s%s", separator, st);
	}
}

/**
* print_floats - prints float
* @separator: separator between float
* @list: argument list
*
* Return: Always 0
*/

void print_floats(va_list list, char *separator)
{
	printf("%s%f", separator, va_arg(list, double));
}


/**
* print_all - print anything
* @format: argument list passed
*
* Return: Always 0
*/

void print_all(const char * const format, ...)
{
	va_list list;
	int i, j;
	char *separator;

	type_t ops[] = {
		{"c", print_characters},
		{"i", print_integers},
		{"f", print_floats},
		{"s", print_strings},
		{NULL, NULL}
	};
	va_start(list, format);
	i = 0;
	separator = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(ops[j]).op)
			{
				ops[j].f(list, separator);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
