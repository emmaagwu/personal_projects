#include <unistd.h>
#include <stdio.h>

/**
 *
 *
 *
 */

int main(void)
{
	pid_t myparent;

	myparent = getppid();
	printf("%u\n", myparent);

	return (0);
}
