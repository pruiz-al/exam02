int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>
int main()
{
	char str[] = "hola hola";
	printf("%d", ft_strlen(str));
	return (0);
}