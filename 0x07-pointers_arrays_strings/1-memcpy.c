#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;
for (i = 0; n > 0 ; i++, n--)
{
dest[i] = src[i];
}

return (dest);
}
