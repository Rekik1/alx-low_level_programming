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
int i = 0, int I = 98, int a = 1, int A =99 ;	
while (i <= I)
{
a = i + 1;
while (a <= A)
{
putchar(i < 9 ? 0 + '0' : (i / 10) + '0');
putchar(i < 9 ? 0 + '0' : (i % 10) + '0');
putchar(' ');
putchar(a < 9 ? 0 + '0' : (a / 10) + '0');
putchar(a < 9 ? 0 + '0' : (a % 10) + '0');
if (i !=I)
{
putchar(',');
putchar(' ');
}
a++;
}
i++;
}
putchar('\n');
return (0);
}
