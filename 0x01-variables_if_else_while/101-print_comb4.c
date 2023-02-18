#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry point
*
*Return: 0 (Success)
*
*/

int main(void)
{
int i, a, b;
{
for (i = '0'; i < '9'; i++)
{
for (a = i + 1; a <= '9'; a++)
{
for (b = a + 1; b <= '9'; b++)
{
if ((a != i) != b)
putchar(i);
putchar(a);
putchar(b);
if (i == '7' && a == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
