#include "main.h"

/**
* print_most_numbers - checks for  a digit.
* Return: Always 0.
*/

void print_most_numbers(void)

{
int a = 0;

for (; a <= 9; a++)
{
if (a == 2 | | a == 4)
{
_putchar(a + ‘0’);
}
}
_putchar('\n');
}
