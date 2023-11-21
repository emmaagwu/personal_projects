#include <stdio.h>

/**
 *main - prints the program argument
 *
 */


int main(int ac, char **av)
{
	int i = 1;
	(void)ac;

	while (av[i])
		printf("%s\n", av[i++]);
	return (0);
}
