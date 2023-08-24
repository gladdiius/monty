#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: noting
*/
void insertToS(stack_t **head, int n)
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
