#include <unistd.h>

int ft_atoi(char *str)
{
	int n = 0;
	int i = 0;
	while (str[i])
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n);
}

int size_number(int n)
{
	int i = 0;
	if (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i + 1);
}
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else {
		ft_putchar(n  + '0');
	}
}

void tab_mult(int n)
{
	int mult = 1;
	int new = 0;
	while (mult <= 9)
	{
		new = mult * n;
		ft_putnbr(mult);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(new);
		write(1, "\n", 1);
		mult++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		tab_mult(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}