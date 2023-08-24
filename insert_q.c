#include "monty.h"
/**
 * InsetToQ - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: returns noting.
*/
void insertToQ(stack_t **head, int n)
{
	stack_t *new_node, *var1;

	var1 = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (var1)
	{
		while (var1->next)
			var1 = var1->next;
	}
	if (!var1)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		var1->next = new_node;
		new_node->prev = var1;
	}
}
