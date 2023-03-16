#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: secound string
 * @n: unsigned int
 * Return: newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int u1, u2, u3;
char *s;
if (s1 == NULL)
{
u1 = 0;
}
else
{
for (u1 = 0; s1[u1]; ++u1)
if (s2 == NULL)
u2 = 0;
}
for (u2 = 0; s2[u2]; ++u2)
{
if (u2 > n)
u2 = n;
s = malloc(sizeof(char) * (u1 + u2 + 1));
if (s == NULL)
return (NULL);
for (u3 = 0; u3 < u1; u3++)
s[u3] = s1[u3];
for (u3 = 0; u3 < u2; u3++)
s[u3 + u1] = s2[u3];
s[u1 + u2] = '\0';
}
return (s);
}
