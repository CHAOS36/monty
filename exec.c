#include "monty.h"

/**
* execute - function that executes the opcode
* @stack: head stack linked list
* @counter: line count
* @file: pointer to monty file stream
* @content: line content
*
* Return: nothing
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int p = 0;
	char *opet;

	opet = strtok(content, " \n\t");
	if (opet && opet[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[p].opcode && opet)
	{
		if (strcmp(opet, opst[p].opcode) == 0)
		{	opst[p].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (opet && opst[p].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, opet);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
