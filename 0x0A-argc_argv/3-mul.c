/**
 * main - this fucation is good so helthu and good
 * @argc: helthy prameter and good
 * @argv: good prameter so good
 * Return: return 0 always good
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
if (argc == 3)
{
int i, num1, num2;
for (i = 0; i < argc; i++)
	{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	}
	printf("%d\n", num1 * num2);
}
	else
		printf("Error\n");
return (0);
}
