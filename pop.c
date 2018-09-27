#include "monty.h"

/**
 * pop - This function deletes the node at the top of the stack
 * @head: The head node of the linked list
 * @inde: The line number
 * Return: 1 for success, else -1 for failure
 */

stack_t *pop(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	/* Head points to head of stack */
	stack_t *head = *stack;

	/* Check if stack is NULL */
	if (*stack == NULL)
	{
		/* Print error, free, and exit */
		fprintf(stderr, "L%d: can't pop an empty stack\n",
			line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	/* Stack now points to the next node */
	*stack = (*stack)->next;

	/* Free head node */
	free(head);

	/* If stack exists already, set it's prev pointer to NULL */
	if (*stack)
		(*stack)->prev = NULL;

	return (*stack);
}
