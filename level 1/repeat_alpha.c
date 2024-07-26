#include <unistd.h>

void	repeat_alpha(char *str)
{
	int i = 0;
	int j = 'A';
	int k = 'a';
	while(str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			while (j <= str[i]){
				write (1, &str[i], 1);
				j++;
			}
			j = 'A';
		} 
		else if(str[i] >= 'a' && str[i] <= 'z') 
		{
			while (k <= str[i]){
				write (1, &str[i], 1);
				k++;
			}
			k = 'a';
		} 
		else 
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		repeat_alpha(argv[1]);
	return (0);
}