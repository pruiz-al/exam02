#include <stdlib.h>

int ft_strlen(char *s)
{
	int i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}
char    *ft_strdup(char *src)
{
	int i = 0;
	char *s = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!src[i])
		return (NULL);
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

#include <stdio.h>
int main()
{
	char *s = ft_strdup("hola");
	printf("%s\n", s);
	return (0);
}