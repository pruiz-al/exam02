#include <stdio.h>
size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	int j = 0;
	while (s[i] != '\0')
	{
		while(s[i] == accept[j] && s[i] != '\0')
			i++;
		j++;
		if (s[i] != accept[j])
			break;
	}
	return (i);
}
#include <string.h>
int main()
{
	size_t s = ft_strspn("ppprobopando", "proo");
	printf("%zu", s);
	return (0);
}