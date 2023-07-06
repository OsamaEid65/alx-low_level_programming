#include "main.h"
/**
 * _puts_recursion - prints string with nwe line
 * @s:pointer to string
 * Return:return always the 0
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
