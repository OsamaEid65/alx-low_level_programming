#include "main.h"
#include "math.h"

/**
 *_pow_recursion - this fucation is pow
 *@x: int
 *@y: int
 *Return:return the pow
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else
return (pow(x, y));
}
