#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - C language entry point
 *
 * Description: assign rand number to varibale n each time is executed
 * Return: Zero
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAAND_MAX / 2;
int last_d = n % 10
if (last_d > 5)
{
printf("Last digit of %d is %d  and is greatt than 5.\n", n, last_d);
}
else if (last_d == 0)
{
printf("Last digit of %d is %d and is 0.\n", n, last_d);
}
else if (last_d < 6 && last_d != 0)
{
printf"(Last digit of %d is %d and is les than 6 and not zero.\n", n, last_d);
}
return (0);
}
