#include <unistd.h>
void ft_putnbr(int n)
{
	int nn = n;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	} else {
		nn = n % 10 + '0';
		write(1, &nn, 1);
	}
}

int main(int argc, char *argv[])
{
	if (argc == 1)
		write(1, "0", 1);
	else
		ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}