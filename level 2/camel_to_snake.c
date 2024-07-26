#include <unistd.h>

void ft_lowercase(char c)
{
	c += 32;
	write(1, &c, 1);
}

void camel_to_snake(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			write(1, "_", 1);
			ft_lowercase(str[i]);
		} 
		else {
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		camel_to_snake(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}