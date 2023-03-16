#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory using malloc
 * @b: allocate memory
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *v;
v = malloc(b);
if (v == NULL)
exit(98);
return (v);
}
