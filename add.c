#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 * @head: stack head
 * @itrated: line_number
 * Return: returns noting.
*/
void add(stack_t **head, unsigned int itrated)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", itrated);
		fclose(data_s.file);
		free(data_s.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	var1 = h->n + h->next->n;
	h->next->n = var1;
	*head = h->next;
	free(h);
}
#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: returns noting.
*/
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *var1;

	var1 = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (var1)
		var1->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
