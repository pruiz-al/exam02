#include <unistd.h>

void epur_str(char *str)
{
	int i = 0;
	int space = 0;
	char c = ' ';
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
			space = 1;
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (space)
				write(1, &c, 1);
			space = 0;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}