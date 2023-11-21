#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

/**
 *
 *
 *
 */

int main(void)
{
	int status, i;
	pid_t child_pid;
	char *arg[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (i = 1; i <= 5; ++i)
	{
	child_pid = fork();
	if (child_pid == -1)
		perror("Error: ");
	else if (child_pid == 0)
	{
		if(execve(arg[0], arg, NULL) == -1)
			perror("Execve");
	}
	else
	{
		wait(&status);
	}
	}
        return (0);
}
