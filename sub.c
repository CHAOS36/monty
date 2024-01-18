#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *pipo;
	int sus, nodes;

	pipo = *head;
	for (nodes = 0; pipo != NULL; nodes++)
		pipo = pipo->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	pipo = *head;
	sus = pipo->next->n - pipo->n;
	pipo->next->n = sus;
	*head = pipo->next;
	free(pipo);
}
