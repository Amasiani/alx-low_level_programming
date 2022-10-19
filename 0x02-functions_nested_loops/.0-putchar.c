#include "main.h"

/**
* Main - Function that prints _putchar.
*
* Reurn: Always 0 (success)
*/

int main(void)
{
int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
int count, siz;

siz = sizeof(str)/sizeof(int);
for (count=0; count<siz; count++)
{
_putchar(str[count]);
return (0);
}
}
