#include <unistd.h>

void ft_uppercase(char c)
{
	char x = c -= 32;
	write(1, &x, 1);
}

void snake_to_camel(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			write(1, &str[i], 1);
		} else {
			i++;
			ft_uppercase(str[i]);
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		snake_to_camel(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}