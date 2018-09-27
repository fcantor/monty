#include "monty.h"

/**
 * pchar - prints the char at the top of the stack
 * @stack: The stack list
 * @line_number: The line number of the file
 * Return: The head of the stack
 */

stack_t *pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	/* Check if stack is NULL */
	if (!head)
	{
		/* Print error, free, and exit */
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	putchar(head->n);
	putchar('\n');

	return (*stack);
}
