#include <stdio.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t  i = 0;
	int j = 0;
	while (s[i] != '\0')
	{
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		j = 0;
		i++;
	}
	return (i);
}

#include <string.h>
int main()
{
	printf("%lu", ft_strcspn("holahola", "al"));
	return (0);
}
