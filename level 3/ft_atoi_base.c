char ft_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int s = 0;
	int i = 0;
	int sign = 1;
	int d;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			d = (str[i] - '0');
		else if (str[i] >= 'A' && str[i] <= 'F')
			d = ft_lower(str[i]) + 10 - 'A';
		else if (str[i] >= 'a' && str[i] <= 'f')
			d = (str[i] - 'a' + 10);
		else
			return (0);
		if (d >= str_base)
			return (0);
		s = s * str_base + d;
		i++;
	}
	return (s * sign);
}

#include <stdio.h>
int main()
{
	const char *str = "24";
	int str_base = 5;
	int s = ft_atoi_base(str, str_base);
	printf("%d", s);
	return (0);
}