#include "monty.h"

/* Initialize the global variable */
int token = 0;

/**
 * main - Interprets bytecode
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	const char *filename;
	char *string, *func;
	size_t nbytes = 1;
	FILE *file;
	unsigned int line_num = 0;
	ssize_t read_c = 0;
	stack_t *stack;
	char *error;

	stack_t

	stack = NULL;
	if (argc == 2)
	{
		filename = argv[1];

		/* Open File with the bytecodes */
		file = fopen(filename, "r");
		if (file == NULL)
		{
			printf("Failed to open file\n");
			exit(1);
		}

		/* Read file line by line */
		while (read_c != EOF)
		{
			string = NULL;
			read_c = getline(&string, &nbytes, file);
			if (read_c == -1)
			{
				printf("Failed to read file\n");
				free(string);
				fclose(file);
				exit(1);
			}

			/* Keep count of the number of lines */
			line_num++;

			/* Continue if line had only the null byte */
			if (read_c == 0)
				continue;

			/* Continue if line had only the new line character */
			if (read_c == 1)
			{
				free(string);
				continue;
			}

			/* Parse the first elements of the line */
			func = strtok(string, " ");
			token = atoi(strtok(NULL, " "));

			push(&stack, line_num);

			printf("After push\n");
			printf("%s has argument %d\n", func, token);
		}
		/* Free memory and close the file */

		free_stack(stack);

		fclose(file);
	}
	else
	{
		error = "Wrong number of arguments\n";
		write(STDERR_FILENO, error, strlen(error));
		exit(99);
	}

	return (0);
}
