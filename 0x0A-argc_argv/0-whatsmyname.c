#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libgen.h>
#include <unistd.h>

/**
 * main - Main function
 * Description: The function prints the number of arguments passed into it
 *
 * Return: The return value is int.
 */
int main(void)
{
	char pid[20];
	char command[100];
	char path[4096];

	snprintf(pid, sizeof(pid), "%d", getpid());
	snprintf(command, sizeof(command), "readlink /proc/%s/exe", pid);

	FILE *pipe = popen(command, "r");
	if (!pipe)
	{
		perror("popen");
		return (EXIT_FAILURE);
	}
	if (fgets(path, sizeof(path), pipe) == NULL)
	{
		perror("fgets");
		pclose(pipe);
		return (EXIT_FAILURE);
	}

	char *name = basename(path);

	printf("%s\n", name);
	pclose(pipe);

	return (EXIT_SUCCESS);
}
