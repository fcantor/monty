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
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{NULL, NULL}
	};
	char *opcode;
	int i = 0;

	while (i < 4)
	{
		opcode = (ops[i]).opcode;
		/* if the opcode is in the list */
		if (strcmp(s, opcode) == 0)
		{
			/* return that value */
			return (*(ops[i]).f);
		}
		i++;
	}

	return (NULL);
}
