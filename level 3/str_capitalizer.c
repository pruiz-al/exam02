#include <unistd.h>

void str_capitalizer(char *s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && (i == 0 || s[i-1] == ' ' || s[i-1] == '\t'))
			s[i] -= 32;
		write(1, &s[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	int i;
	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	} else
		write(1, "\n", 1);
	return (0);
}