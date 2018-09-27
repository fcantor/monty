#include "monty.h"

/**
 * nop - This function does nothing
 * @stack: Pointer to the stack
 * @line_number: Line number of file
 * Return: Pointer to the stack
 */

stack_t *nop(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	return (*stack);
}
