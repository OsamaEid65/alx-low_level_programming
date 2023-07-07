#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[])
{
	int i , num1 , num2;
	for (i=0;i<argc;i++)
	{
		num1 = atoi (argv[1]);
		num2= atoi (argv[2]);

	}
	printf ("%d",num1*num2);
	return (0);
}
