#include "monty.h"

/**
 * pstr - This function prints the string starting at the top of
 * the stack
 * @stack: The pointer to the stack
 * @line_number: The current line number in the file
 * Return: The pointer to the stack
 */
stack_t *pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (!head)
	{
		/* Print error, free, and exit */
		fprintf(stderr, "L%d: can't pstr, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	while (head)
	{
		if (head->n < 32 || head->n > 127)
			break;
		putchar(head->n);
		head = head->next;
	}
	putchar('\n');

	return (*stack);
}
