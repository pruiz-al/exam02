unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char new = 0;

	while (i > 0)
	{
		new = new * 2 + (octet % 2);
		octet /= 2;
		i--;
	}

	return (new);
}

#include <stdio.h>
int main()
{
	unsigned char c = reverse_bits(44);
	printf("%u", c);
	printf(",%c", c);
	return (0);
}