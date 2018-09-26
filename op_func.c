#include "monty.h"

/**
 * op_func - This function selects the correct func to
 * perform the operation
 * @s: The operator passed as argument to program
 * Return: A pointer to the function that corresponds to the operator
 */

stack_t *(*op_func(char *s))(stack_t **stack, unsigned int line_num)
{
	instruction_t ops[] = {
		{"push", push},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 2)
	{
		/* if the pointer is equal to the operator val */
		if (*s == *(ops[i]).opcode)
		{
			/* return that value */
			return (*(ops[i]).f);
		}
		i++;
	}
	return (NULL);
}
