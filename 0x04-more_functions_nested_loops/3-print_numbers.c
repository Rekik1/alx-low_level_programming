#include "main.h"

/**
* print_numbers - checks for a digit.
*
* Return: Always 0.
*/

void print_numbers(void)

{
int a;

for (a = 0; a <= 9; a++)
{
_putchar(a + ‘0’);
}
_putchar('\n');
}
