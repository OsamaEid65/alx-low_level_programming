#include "main.h"
/**
 * _puts_recursion - prints string with nwe line
 * @s:pointer to string
 * Return:return always the 0
 */
void _puts_recursion(char *s)
{
int i  = 0;
while (*s != '\0' && i < 1)
{
puts(s);
i++;
_putchar('\0');
}
}
