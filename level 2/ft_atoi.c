int	ft_atoi(const char *str)
{
	int s = 0;
	int i = 0;
	int sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		s = s * 10 + str[i] - '0';
		i++;
	}
	return (sign * s);
}
#include <stdio.h>
int main()
{
	int i = ft_atoi("-2534");
	printf("%d", i);
	return (0);
}