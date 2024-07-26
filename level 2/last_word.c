#include <unistd.h>
int ft_strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
void last_word(char *str)
{
	int i = ft_strlen(str) - 1;
	int len;
	while ((str[i] == ' ' || str[i] == '\t') && i >= 0)
		i--;
	len = i;
	while (i >= 0 && str[i] != '\t' && str[i] != ' ')
		i--;
	i++;
	while (i <= len)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}