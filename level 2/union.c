#include <unistd.h>

int is_in(char *s, char c)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void ft_union(char *s1, char *s2)
{
	char new[256] = {0};
	int i = 0;
	int j = 0;
	while (s1[i] != '\0')
	{
		if (!is_in(new, s1[i]))
		{
			write(1, &s1[i], 1);
			new[j] = s1[i];
			j++;
		}
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		if (!is_in(new, s2[i]))
		{
			write(1, &s2[i], 1);
			new[j] = s2[i];
			j++;
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}