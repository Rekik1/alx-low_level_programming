#include "main.h"

/**
* print_diagonal - draws \
* @n: the number of times the character \ should be printed
* Return: \
*/

void print_diagonal(int n)
{

int a, b;
if (n <= 0)
{
_putchar('\n');
}
else
for ((a = 0;) a < n; a++)
{
for (b = 0; b < n; b++)
{
if (a == b)
_putchar(‘\\');
else if (a > b)
_putchar(' ');
}
_putchar('\n');
}
}
}
