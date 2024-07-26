#include <stdlib.h>

int ft_size(int start, int end)
{
	int n = end - start;
	if (n < 0)
		n *= -1;
	return (n + 1);
}
int     *ft_range(int start, int end)
{
	int *a = malloc(ft_size(start, end) * sizeof(int));
	if (!a)
		return (NULL);
	int i = 0;
	int n = start;
	while (i < ft_size(start, end))
	{
		if (start < end)
		{
			a[i] = n;
			n++;
			i++;
		} else
		{
			a[i] = n;
			n--;
			i++;
		}
	}
	return (a);
}
#include <stdio.h>
int main()
{
	int start = 0;
	int end = -3;
	int *a = ft_range(start, end);
	int i = 0;
	while (i < ft_size(start, end))
	{
		printf("%d ", a[i]);
		i++;
	}
	return (0);
}