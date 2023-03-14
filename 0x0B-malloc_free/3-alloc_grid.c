#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return:  returns a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
int **array;
int i, a;
{
if (height <= 0 || width <= 0)
return (NULL);
array = malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
array[i] = malloc(sizeof(int) * width);
if (array[i] == NULL)
{
free(array);
for (a = 0; a <= i; a++)
free(array[a]);
return (NULL);
}
}
}
for (i = 0; i < height; i++)

for (a = 0; a < width; a++)
array[i][a] = 0;

return (array);
}
