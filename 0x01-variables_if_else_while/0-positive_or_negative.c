#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n < 0)
{
printf("%d", n);
printf(" is negative\n");
}
else if (n > 0)
{
printf("%d", n);
printf(" is positive\n");
}
else
{
printf("%d", n);
printf(" is zero\n"); }
return (0);
}
