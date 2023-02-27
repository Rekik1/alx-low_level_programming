#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: string
 */

void puts2(char *str)
{
int i = 0;
int a = 0;
int o;
char *b = str;
while (*b !=  '\0')
{
b++;
i++
}
t = i - 1;
for (o = 0 ; o <= t ; o++)
{
if (o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}
