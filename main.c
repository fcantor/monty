#include "monty.h"

extern int token;

/**
 *
 */
int main(int argc, char **argv)
{
	const char *filename;
	char *string, *func, *ptr;
	size_t nbytes = 0;
	FILE* file;
	unsigned int line_num = 0;
	ssize_t read_c;
	stack_t** stack = NULL;

	if (argc == 2)
	{
		filename = argv[1];

		file = fopen(filename, "r");
		if (file == NULL)
		{
			printf("Failed to open file\n");
			exit(1);
		}

		while (read_c != EOF)
		{
			read_c = getline(&string, &nbytes, file);
			if (read_c == -1)
			{
				printf("Failed to read file\n");
				free(string);
				exit(1);
			}
			line_num++;
			if (read_c == 0)
				continue;
			if (read_c == 1)
			{
				free(string);
				continue;
			}

			func = strtok(string, " ");
			token = strtok(NULL, " ");

			ptr = push(**stack, line_num);
		}
		fclose(file);

		print("stack: %s\n", (*stack)->n);
	}

	return (0);
}
