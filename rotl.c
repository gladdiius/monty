#include "monty.h"
/**
  *rotl- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: returns noting.
 */
void rotl(stack_t **head,  __attribute__((unused)) unsigned int itrated)
{
	stack_t *tmp = *head, *var1;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	var1 = (*head)->next;
	var1->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = var1;
}
