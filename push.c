#include "monty.h"
/**
 * push - add node to the stack
 * @head: stack head
 * @itrated: line_number
 * Return: returns noting.
*/
void push(stack_t **head, unsigned int itrated)
{
	int n, j = 0, flag = 0;

	if (data_s.arg)
	{
		if (data_s.arg[0] == '-')
			j++;
		for (; data_s.arg[j] != '\0'; j++)
		{
			if (data_s.arg[j] > 57 || data_s.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", itrated);
			fclose(data_s.file);
			free(data_s.line);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", itrated);
		fclose(data_s.file);
		free(data_s.line);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(data_s.arg);
	if (data_s.dire == 0)
		insertToS(head, n);
	else
		insertToQ(head, n);
}
