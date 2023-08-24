#include "monty.h"
/**
 * pint - prints the top
 * @head: stack head
 * @itrated: line_number
 * Return: returns noting.
*/
void pint(stack_t **head, unsigned int itrated)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", itrated);
		fclose(data_s.file);
		free(data_s.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
