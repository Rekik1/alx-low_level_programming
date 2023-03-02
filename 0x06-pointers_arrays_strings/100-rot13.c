#include "main.h"
#include <stdio.h>

/**
* rot13 - a function that encodes a string using rot13
* @str: string
* Return: str
*/

char *rot13(char *str)
{
int i;
int a;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
	{
for (a = 0; a < 52; a++)
{
if (str[i] == data1[a])
{
str[i] = datarot[a];
break;
}
}
}
return (str);
}
