#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void fprime(int n)
{
	int i = 2;
	if (n == 1 || n == 0)
		printf("%d", n);
	while (i <= n)
	{
		while (n % i == 0)
		{
			n /= i;
			if (n == 1)
				printf("%d", i);
			else	
				printf("%d*", i);
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		fprime(atoi(argv[1]));
		printf("\n");
	}
	else
		printf("\n");
	return (0);
}