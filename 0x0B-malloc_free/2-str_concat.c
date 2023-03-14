#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *c;
int i = 0, a1 = 0, a2 = 0, a3 = 0;
while (s1 && s1[a2])
a2++;
while (s2 && s2[a3])
a3++;
c = malloc(sizeof(char) * (a2 + a3 + 1));
if (c == NULL)
return (NULL);
i = 0;
a1 = 0;
if (s1)
{
while (i < a2)
{
c[i] = s1[i];
i++;
}
}
if (s2)
{
while (i < (a2 + a3))
{
c[i] = s2[a1];
i++;
a1++;
}
}
c[i] = '\0';
return (c);
}
