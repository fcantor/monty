#include "monty.h"

/**
 * free_stack - frees the stack
 * @head: pointer to the stack
 * Return: Nothing
 */
void free_stack(stack_t *head)
{
	stack_t *tmp_head;

	/* Find the last node */
	while (head)
	{
		tmp_head = head;
		head = head->next;
		free(tmp_head);
	}
}
