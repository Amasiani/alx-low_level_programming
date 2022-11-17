#include "function_pointer.h"

/**
* print_name - prints name
* @name: name value to check
* @f: function pointer
*
* Return: Always 0
*/

void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
