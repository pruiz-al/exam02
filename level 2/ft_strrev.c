int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
	int i = 0;
	int j = ft_strlen(str) - 1;
	char *s = str;
	char temp = 'q';

	while (i <= j)
	{
		temp = str[j];
		str[j] = s[i];
		s[i] = temp;
		j--;
		i++;
	}
	return (s);
}

#include <stdio.h>
int main()
{
	char s[] = "esto es una prueba";
	printf("%s\n", ft_strrev(s));
	return(0);
}