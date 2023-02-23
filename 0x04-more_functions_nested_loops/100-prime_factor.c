#include <stdio.h>

/**
* main - prints largest prime factor.
* Return: Always 0.
*/

int main(void)
{
long int n, a;

n = 612852475143;
for (a = 2; a <= n; a++)
{
if (n % a == 0)
{
n /= a;
a--;
}
}
printf("%ld\n", a);
return (0);
}

