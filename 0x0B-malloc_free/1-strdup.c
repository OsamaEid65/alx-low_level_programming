/**
 * _strdup - good fucathism damf selfo emddf
 * @str: good pramedte an pjdd
 * Return:return always 0
 */
#include <stdio.h>
#include <stdlib.h>
char *_strdup(char *str)
{
int i, n;
char *ptr;
char *a=str;
if (str == 0)
{
return (0);
}
while (*a != '\n')
{
a++;
n++;
}
ptr = (char *)malloc(n *sizeof(char));
if (ptr < str)
return (0);
do {
ptr[i] = *(str + i);
i++;
} while (i < n);
return (ptr);
}
