#include "monty.h"

/**
 *
 */
int main(int argc, char **argv)
{
	const char *filename;
	int fd, w = 0, r = 0;
	char *buffer;

	if (argc == 2)
	{
		filename = argv[1];

		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			printf("Failed to open file\n");
			exit(1);
		}
		buffer = malloc(sizeof(char) * 1024);
		if (buffer == NULL)
			return (-1);

		r = read(fd, buffer, 1024);
		if (r == -1)
		{
			free(buffer);
			printf("Could not read file\n");
			exit(1);
		}
		close(fd);

		w = write(STDOUT_FILENO, buffer, r);
		if (w < r)
		{
			exit(1);
		}
	}

	return (0);
}
