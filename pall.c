#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *pepe;
	(void)counter;

	pepe = *head;
	if (pepe == NULL)
		return;
	while (pepe)
	{
		printf("%d\n", pepe->n);
		pepe = pepe->next;
	}
}
