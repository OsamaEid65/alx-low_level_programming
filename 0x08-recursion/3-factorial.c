#include "main.h"

/*
 * factorial-this funcation is give the factoril
 * @n:is the number you wante the factorial
 * Return:return always zero
 */

int factorial(int n)
{
if (n == 1)
{
return (1);
}
else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}
