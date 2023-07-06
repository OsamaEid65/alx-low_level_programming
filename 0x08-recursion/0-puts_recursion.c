#include "main.h"
/**
 * _puts_recursion - prints string with nwe line
 * @s:pointer to string
 * Return:return always the 0
 */
void _puts_recursion(char *s)
{
while (*s != '\0')
{
_putchar(*(s++));
_putchar('\0');
}
}
