#include "main.h"

/**
* _strncat - a function that concatenates two strings
* @dest: dest string
* @src: src string
* @n: n bytes
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int d = 0, s = 0;

while (dest[d++])
s++;
for (d = 0; src[d] && d < n; d++)
dest[s++] = src[d];
return (dest);
}
