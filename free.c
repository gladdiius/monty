#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *var1;

	var1 = head;
	while (head)
	{
		var1 = head->next;
		free(head);
		head = var1;
	}
}
