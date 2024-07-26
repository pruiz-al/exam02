#include <unistd.h>

int founded(char *str, char c)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void ft_putchar(char *s)
{
	int i = 0;
	while (s[i] != '\0') {
		write(1, &s[i], 1);
		i++;
	}
}

void wdmatch(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		while (s1[i] != s2[j] && s2[j] != '\0')
			j++;
		if (s2[j] == '\0')
			break;
		else {
			i++;
			j++;
		}
	}
	if (s1[i] == '\0')
		ft_putchar(s1);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}