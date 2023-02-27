#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the string
 */
void print_rev(char *s)
{
int i = 0;
int o;
while (*s != '\0')
{
i++;

}
for (i -= 1; i >= 0; i--)
{
_putchar(*s);
}
_putchar('\n');
}
