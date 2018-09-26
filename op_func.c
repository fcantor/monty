#include "monty.h"

/**
 * op_func - This function selects the correct func to
 * perform the operation
 * @s: The operator passed as argument to program
 * Return: A pointer to the function that corresponds to the operator
 */

void (*op_func(char *s))(stack_t, unsigned int)
{
	op_t ops[] = {
		{"push", push},
/*		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop}, */
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 2)
	{
		/* if the pointer is equal to the operator val */
		if (*s == *(ops[i]).op)
		{
			/* return that value */
			return (*(ops[i]).f);
		}
		i++;
	}
	return (NULL);
}
