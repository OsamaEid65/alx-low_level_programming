/**
 * malloc_checked - this fuc is good and helthoe
 * @b: is ggooe and soo good fgolemfmelm
 * Return: return 0 always
 */
#include <stdlib.h>
#include <stdio.h>
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
