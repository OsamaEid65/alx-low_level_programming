/**
 * array_range - sdfklndflkn dfbbdfkg sgflg lfgo
 * @min : fngrggjjg
 * @max : rgjrgjrgj
 * Return: return 0 ALWAUShr rgrr rgr
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int *array_range(int min, int max)
{
int *ptr;
int size, i;
size = max - min + 1;
if (min > max)
return (NULL);
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);
for (i = 0; min <= max; i++)
ptr[i] = min++;
return (ptr);
}
