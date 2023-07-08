/**
 * main - the fucation is good so good helthy
 * @argc: good prameter good so ggod
 * @argv: good so good helthy good
 * Return:return 0 always
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int i, counter = 0, b;
	char *str;
for (i = 0; i < argc; i++)
{
str = argv[i];
}
for (b = 0; b < argc; b++)
{
if (*str == 48)
printf("0");
else
{
counter += 1;
}
}
	printf("%d\n", --counter);
	return (0);
}
