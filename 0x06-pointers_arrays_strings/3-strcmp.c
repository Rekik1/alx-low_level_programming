#include "main.h"

/**
* _strcmp - compare string values
* @s1: pointer for the first string
* @s2: pointer for the second string
* Return: *s1 - *s2
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
