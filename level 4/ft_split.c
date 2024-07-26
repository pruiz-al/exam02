#include <stdlib.h>
int count_words(char *str)
{
	int i = 0;
	int words = 0;
	int k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && !k)
		{
			words++;
			k = 1;
		}
		if (str[i] == ' ')
			k = 0;
		i++;
	}
	return (words);
}

char    **ft_split(char *str)
{
	char	**split = malloc(count_words(str) + 1);
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' && str[i] != '\0')
			i++;
		if (str[i] != ' ' && str[i] != '\0')
		{
			j = i;
			while (str[i + 1] != ' ' && str[i + 1] != '\0')
				i++;
		}
	}
	return (split);
}

#include <stdio.h>
int main()
{
	char *str = "   hola  que  rf   ";
	int words = count_words(str);
	printf("%d\n", words);
	return (0);
}