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
	char *string, *opcode, *num_str;
	size_t nbytes = 1;
	FILE *file;
	unsigned int line_num = 0;
	ssize_t read_c = 0;
	stack_t *stack;
	char *error;

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
			token = 0;
			string = NULL;
			read_c = getline(&string, &nbytes, file);

			if (read_c == -1)
			{
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
			opcode = strtok(string, " \n");

			/* Check whether the first token is the opcode 'push' */
			if (strcmp(opcode, "push") == 0)
				num_str = strtok(NULL, " \n");

			/* Check if token is a digit or NULL */
			if (num_str == NULL)
			{
				fprintf(stderr, "L%d: usage: push integer\n",
					line_num);
				free(string);
				free_stack(stack);
				fclose(file);
				exit(EXIT_FAILURE);
			}
			else
				token = atoi(num_str);

			op_func(opcode)(&stack, line_num);
		}
		/* Free memory and close the file */
		free(string);
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
