void	ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
int main()
{
	int a = 9;
	int b = 5;
	ft_swap(&a,&b);
	printf("a = %d, b = %d", a, b);
	return (0);
}