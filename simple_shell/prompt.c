#include <stdio.h>
#include <unistd.h>

/**
 *
 *
 *
 */

int main()
{
	char *line = NULL;
	size_t len;
	ssize_t charRead;

	printf("$ ");
	charRead = getline(&line, &len, stdin);
	if (charRead == EOF)
		printf("end of file\n");
	printf("%s", line);

	return (0);
}
