#include <stdio.h>
#include <stdlib.h>

void pgcd(int a, int b)
{
	int max = 1;
	int i = 2;
	while (i < a && i < b)
	{
		if (a % i == 0 && b % i == 0)
			max = i;
		i++;
	}
	printf("%d", max);
}

int main(int argc, char *argv[])
{
	int n1;
	int n2;
	if (argc == 3)
	{
		n1 = (int)atoi(argv[1]);
		n2 = (int)atoi(argv[2]);
		if (n1 > 0 && n2 > 0)
			pgcd(n1, n2);
	}
	printf("%c", '\n');
	return (0);
}