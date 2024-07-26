#include <unistd.h>

int ft_contained(char *str, char c)
{
	int i = 0;
	int n = 0;
	while(str[i] != '\0')
	{
		if (str[i] == c)
			n++;
		i++;
	}
	return (n);
}

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void search_and_replace(char *str, char c, char x)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			str[i] = x;
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		if (ft_contained(argv[1], argv[2][0]) == 0)
			ft_putstr(argv[1]);
		else
			search_and_replace(argv[1], argv[2][0], argv[3][0]);
	}
	write(1, "\n", 1);
	return (0);
}