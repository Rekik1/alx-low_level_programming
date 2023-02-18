#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - Entry point
*
*Return: 0 (Success)
*
*/

int main(void)
{
int n;
int num;

srand(time(0));
n = rand() - RAND_MAX / 2;
num = n % 10;
if (num > 5)
	printf("Last digit of %d is greater than 5\n", num);
if (num == 0)
	printf("Last digit of %d is 0\n", num);
if (num < 6 && num != 0)
	printf("Last digit of %d is less than 6 and not 0\n", num);
return (0);
}
