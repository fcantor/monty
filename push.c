#include "monty.h"

void *push(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *new_node = NULL;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = token;
	new_node->prev = NULL;

	if (*stack == NULL)
		new_node->next = NULL;
	else
	        new_node->next = (*stack)->next;
}
