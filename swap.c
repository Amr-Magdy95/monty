#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @head: double pointer to the head of the stack
 * @line_number: the number of the line in file
 *
 * Return: void
 */
void swap(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (!head || !(*head) || !(*head)->next)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*head)->next;

	(*head)->prev = temp;
	(*head)->next = temp->next;

	temp->prev = NULL;

	if (temp->next)
		temp->next->prev = *head;

	temp->next = *head;

	*head = temp;
}
