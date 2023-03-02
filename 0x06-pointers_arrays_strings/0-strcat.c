#include "main.h"

/**
* _strcat - a function that concatenates two strings
* @dest: dest string
* @src: src string
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
int d = 0, s = 0;

while (dest[d++])
s++;
for (d = 0; src[d]; d++)
dest[s++] = src[d];
return (dest);
}
