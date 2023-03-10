#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
int a = 0;

while (*(src + i) != '\0')
{
i++;
}
for ( ; a < i ; a++)
{
dest[a] = src[a];
}
dest[i] = '\0';
return (dest);
}
