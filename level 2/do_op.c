#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void do_op(char *s1, char op, char *s2)
{
	int result = 0;
	int n1 = atoi(s1);
	int n2 = atoi(s2);
	if (op == '+')
		result = n1 + n2;
	else if (op == '-')
		result = n1 - n2;
	else if (op == '*')
		result = n1 * n2;
	else if (op == '/')
		result = n1 / n2;
	else if (op == '%')
		result = n1 % n2;
	printf("%d\n", result);
}

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		do_op(argv[1], argv[2][0], argv[3]);
	} else
	{
		write (1, "\n", 1);
	}
	return (0);
}