#include "monty.h"
/**
 * pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @itrated: line_number
 * Return: returns noting.
*/
void pchar(stack_t **head, unsigned int itrated)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", itrated);
		fclose(data_s.file);
		free(data_s.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", itrated);
		fclose(data_s.file);
		free(data_s.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
