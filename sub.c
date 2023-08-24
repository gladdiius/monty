#include "monty.h"
/**
  *sub- sustration
  *@head: stack head
  *@itrated: line_number
  *Return: returns noting.
 */
void sub(stack_t **head, unsigned int itrated)
{
	stack_t *var1;
	int sus, nodes;

	var1 = *head;
	for (nodes = 0; var1 != NULL; nodes++)
		var1 = var1->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", itrated);
		fclose(data_s.file);
		free(data_s.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	var1 = *head;
	sus = var1->next->n - var1->n;
	var1->next->n = sus;
	*head = var1->next;
	free(var1);
}
