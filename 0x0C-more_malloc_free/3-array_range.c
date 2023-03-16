#include "main.h"
#include <stdlib.h>

/**
 * *array_range -create an array of integers
 * @min: min values
 * @max: max values
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
int *i;
int a, b;
if (min > max)
return (NULL);
b = max - min + 1;
i = malloc(sizeof(int) * b);
if (i == NULL)
return (NULL);
for (a = 0; min <= max; a++)
i[a] = min++;
return (i);
}
