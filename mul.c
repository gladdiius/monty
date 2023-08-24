#include "monty.h"
/**
 * mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @itrated: line_number
 * Return: returns noting.
*/
void mul(stack_t **head, unsigned int itrated)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", itrated);
		fclose(data_s.file);
		free(data_s.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	var1 = h->next->n * h->n;
	h->next->n = var1;
	*head = h->next;
	free(h);
}
