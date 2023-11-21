#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int execute(char *line);
char *prompt(char *cmd, size_t cmd_len);


/**
 *
 *
 *
 */

int main()
{
	char *line;
	char *cmd = NULL;
	size_t cmd_len = 0;
	int status;

	while(1)
	{
		line = prompt(cmd, cmd_len);
		status = execute(line);
	}
		
		return (status);
}

/**
 *
 *
 *
 */

char *prompt(char *cmd, size_t cmd_len)
{
	ssize_t charRead;

	printf("$ ");
	charRead = getline(&cmd, &cmd_len, stdin);
	if (charRead == -1)
	{
		perror("getline");
		free(cmd);
		return (NULL);
	}

	while(cmd)
	{
		if (*cmd == '\n')
			cmd = '\0';
	}

	return(cmd);
}

/**
 * 
 *
 *
 */

int execute(char *line)
{
	pid_t child_pid;
	int status;
	 char *argv[2] = {line, NULL};

	if ((child_pid = fork()) == -1)
	{
		perror("Fork");
		return (-1);
	}
	else if (child_pid == 0)
	{
		printf("Here\n");
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Execve");
			return (-1);
		}
	}
	else
		wait(&status);
	return (0);
}
