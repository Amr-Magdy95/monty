#include "monty.h"
/**
 * pall - print all elements of the stack
 * @head: head of the stack
 * @line_number: ln num
 * Return: nothing
 */
void pall(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	(void) line_number;

	temp = (*head);

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	free(temp);
}
