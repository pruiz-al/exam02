int	max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);
	int max = tab[0];
	int i = 0;
	while(i < len - 1)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

#include <stdio.h>
int main()
{
	unsigned int len = 5;
	int tab[5] = {1, 3, 5, 7, 4};
	int i = max(tab, len);
	printf("%d", i);
	return (0);
}