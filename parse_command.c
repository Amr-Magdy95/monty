#include "monty.h"
#include <stdlib.h>
/**
 * parse_command - parsing the command and passing it to be executed
 * @stack: our main stack
 * @op: the op to be performed
 * @line_number: desc
 * Return: void
 */
void parse_command(stack_t **head, char *op, unsigned int line_number)
{
	int i;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	for (i = 0; ops[i].opcode; i++)
	{
		if (strcmp(op, ops[i].opcode) == 0)
		{
			ops[i].f(head, line_number);
			return;
		}
	}
	printf("L%u: unknown instruction %s", line_number, op);
	exit(EXIT_FAILURE);
}
