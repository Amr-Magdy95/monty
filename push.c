#include "monty.h"
/**
 * push - push node to top of the stack
 * @head: head of the stack
 * @line_number - desc
 * Return: nothing
 */
void push(stack_t **head, unsigned int line_number)
{
	stack_t *newNode;
	char *num;

	num = strtok(NULL, "\n \t\r$");
	if (num == NULL)
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newNode->n = atoi(num);
	newNode->prev = NULL;
	newNode->next = (*head);
	if ((*head) != NULL)
		(*head)->prev = newNode;
	(*head) = newNode;
	free(num);
	newNode = NULL;
	free(newNode);


}
