#include "monty.h"
/**
 * pop - prints the top
 * @head: stack head
 * @itrated: line_number
 * Return: returns noting.
*/
void pop(stack_t **head, unsigned int itrated)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", itrated);
		fclose(data_s.file);
		free(data_s.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
