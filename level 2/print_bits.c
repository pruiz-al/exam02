#include <unistd.h>
void	print_bits(unsigned char octet)
{
	int bits[8];
	int i = 0;
	int j = 7;

	while (i < 8)
	{
		bits[i] = octet % 2;
		octet /= 2;
		i++;
	}

	while (j >= 0)
	{
		char bit = bits[j] + '0';
		write(1, &bit, 1);
		j--;
	}
}

int main()
{
	print_bits(6);
	return (0);
}