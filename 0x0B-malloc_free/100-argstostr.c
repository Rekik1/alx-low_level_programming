#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* *argstostr - concatenates all the arguments of the program
* @ac: number of arguments
* @av: array of arguments
*
* Return: Pointer to the new string (Success), NULL if it fails
*/
char *argstostr(int ac, char **av)
{
int i, a, b, c;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (a = 0; av[i][a] != '\0'; a++)
c++;
c++;
}
str = malloc(sizeof(char) * (c + 1));
if (str == NULL)
return (NULL);
b = 0;
for (i = 0; i < ac; i++)
{
for (a = 0; av[i][a] != '\0'; a++)
{
str[b] = av[i][a];
b++;
}
str[b] = '\n';
b++;
}
return (str);
}
