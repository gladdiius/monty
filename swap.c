#include "monty.h"
/**
 * swap - adds the top two elements of the stack.
 * @head: stack head
 * @itrated: line_number
 * Return: returns noting.
*/
void swap(stack_t **head, unsigned int itrated)
{
	stack_t *h;
	int len = 0, var1;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", itrated);
		fclose(data_s.file);
		free(data_s.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	var1 = h->n;
	h->n = h->next->n;
	h->next->n = var1;
}
