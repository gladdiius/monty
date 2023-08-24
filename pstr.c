#include "monty.h"
/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @itrated: line_number
 * Return: returns noting.
*/
void pstr(stack_t **head, unsigned int itrated)
{
	stack_t *h;
	(void)itrated;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
