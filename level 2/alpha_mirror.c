#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void	alpha_mirror(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'm')
			ft_putchar('z' - str[i] + 'a');
		else if (str[i] >= 'n' && str[i] <= 'z')
			ft_putchar('z' - str[i] + 'a');
		else if (str[i] >= 'A' && str[i] <= 'M')
			ft_putchar('Z' - str[i] + 'A');
		else if (str[i] >= 'N' && str[i] <= 'Z')
			ft_putchar('Z' - str[i] + 'A');
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}