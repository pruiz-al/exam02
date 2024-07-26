unsigned int    lcm(unsigned int a, unsigned int b)
{
	int n = a;
	while (n % b != 0)
		n += a;
	return (n);
}

#include <stdio.h>
int main()
{
	unsigned int n = lcm(14, 30);
	printf("%d", n);
	return (0);
}