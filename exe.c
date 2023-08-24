#include "monty.h"
/**
* execution - executions the opcode
* @stack: head linked list - stack
* @itrated: line_itrated
* @file: poiner to monty file
* @line: text line 
* Return: returns noting.
*/
int execution(char *line, stack_t **stack, unsigned int itrated, FILE *file)
{
	instruction_t opst[] = {
				{"push", push}, {"pall", pall}, {"pint", pint},
				{"pop", pop},
				{"swap", swap},
				{"add", add},
				{"nop", _nop},
				{"sub", sub},
				{"mul", mul},
				{"mod", modelus},
				{"pchar", pchar},
				{"pstr", pstr},
				{"rotl", rotl},
				{"rotr", rotr},
				{"queue", queue},
				{"stack", stack_},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(line, " \n\t");
	if (op && op[0] == '#')
		return (0);
	data_s.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, itrated);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", itrated, op);
		fclose(file);
		free(line);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
