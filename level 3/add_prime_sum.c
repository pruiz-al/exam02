#include <unistd.h>

int ft_atoi(char *s)
{
	int n = 0;
	int i = 0;
	while (s[i] != '\0')
	{
		n = n * 10 + (s[i] - '0');
		i++;
	}
	return (n);
}
void ft_putnbr(int n)
{
	char nn;
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	nn = (n % 10) + '0';
	write(1, &nn, 1);
}

void add_prime_sum(int n)
{
	int s = 0;
	int i = 2;
	int j = 2;
	if (n <= 1)
		ft_putnbr(0);
	while (i <= n && n > 1)
	{
		while (j <= i && (i % j != 0))
			j++;
		if (i == j)
			s += i;
		j = 2;
		i++;
	}
	ft_putnbr(s);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		add_prime_sum(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}