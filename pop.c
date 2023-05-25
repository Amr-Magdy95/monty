#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @head: double pointer to the head of the stack
 * @line_number: the number of the line in file
 *
 * Return: void
 */
void pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (head == NULL || *head == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	*head = (*head)->next;

	free(temp);
}
