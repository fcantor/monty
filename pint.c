#include "monty.h"
stack_t *pint(stack_t **stack, unsigned int line_number)
{
	printf("Pint function at line: %d\n", line_number);

	return (*stack);
}
