#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @head: double pointer to the head of the stack
 * @line_number: the number of the line in file
 *
 * Return: void
 */
void add(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	int sum;

	if (!head || !(*head) || !(*head)->next)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *head;

	sum = temp->n + temp->next->n;
	temp->next->n = sum;

	*head = temp->next;
}
