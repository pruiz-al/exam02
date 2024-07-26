#include <unistd.h>

int is_in(char *s, char c)
{
	int i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
			return(1);
		i++;
	}
	return (0);
}

void inter(char *s1, char *s2)
{
	char new[128] = {0};
	int i = 0;
	int j = 0;
	int k = 0;
	while (s1[j] != '\0')
	{
		if (is_in(s2, s1[j]) && !is_in(new, s1[j]))
		{
			write(1, &s1[j], 1);
			new[k] = s1[j];
			k++;
		}
		j++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}