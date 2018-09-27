#include "monty.h"

/**
 * add - This function adds the top two nodes of the stack, stores it in
 * the second node, and pops off the top node
 * @stack: The stack list
 * @line_number: The line number of the file
 * Return: The edited stack
 */

stack_t *add(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	int sum = 0;
	stack_t *head = *stack;

	/* Check if stack is NULL */
	if (!head)
	{
		/* Print error, free, and exit */
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	/* Sum first two nodes, and store it in second node */
	sum = (head->n) + (head->next->n);
	head->next->n = sum;
	pop(stack, line_number);

	return (*stack);
}
