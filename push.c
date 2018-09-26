#include "monty.h"

/**
 * push - adds a node with the value token on the stack
 * @stack: ponter to the list stack
 * @line_number: unused variable
 * Return: address of the new node
 */
stack_t *push(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *new_node;
	char *error;

	printf("Before token check\n");
	/* Check if token is empty or NULL */
	if (!token)
	{
		printf("Inside token check\n");
		error = "L<line_number>: usage: push integer\n";
		write(STDERR_FILENO, error, strlen(error));
		exit(EXIT_FAILURE);
	}

	/* Create new node */
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node with the value of token */
	new_node->n = token;
	/* New node is placed at the beginning of the list */
	new_node->prev = NULL;
	new_node->next = *stack;

	/* If new node is not alone, update the following one */
	if (*stack != NULL)
		(*stack)->prev = new_node;

	/* head points to the new node */
	*stack = new_node;

	return (new_node);
}
