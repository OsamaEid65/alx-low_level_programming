#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
int c = 0;
while (c < 10)
{
for (int i = 97; i <= 122; i++)
{
putchar(i);
}
c++;
putchar ('\n');
}
}


