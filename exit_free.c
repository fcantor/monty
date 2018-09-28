#include "monty.h"
/**
 * exit_free - frees and exit everything
 * @string: string argument
 * @stack: pointer to head of stack
 * @file: pointer to the file
 * @flag: variable for exiting with error or not
 * Return: Nothing
 */
void exit_free(char *string, stack_t **stack, FILE *file, int flag)
{
	free(string);
	free_stack(stack);
	fclose(file);
	if (flag == 1)
		exit(EXIT_FAILURE);
}
