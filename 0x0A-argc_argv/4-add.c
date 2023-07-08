#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int i,sum;
	for(i=0;i<argc;i++)
	{
		if (-1<argv[i])
		{
		sum+=atoi(argv[i]);
		}
		else 
		{
			printf("Error");
		}
	}
	printf("%d\n",sum);
	return (0);
}
