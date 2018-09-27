#include "monty.h"
stack_t *pop(stack_t **stack, unsigned int line_number)
{
	printf("Pop it out! %d\n", line_number);

	return (*stack);
}
