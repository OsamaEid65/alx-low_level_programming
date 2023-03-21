/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int print_alphabet(void)
{
int i = 97;
while (i <= 122)
{
putchar(i);
i++;
}
putchar('\n');
}
int main(void)
{
putchar(print_alphabet());
return (0);
}
