#include "monty.h"

/**
* f_div - function that divides the top two elements of the stack
* @head: double head pointer to the stack
* @counter: line count
*
* Return: nothing
*/
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0, temper;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temper = h->next->n / h->n;
	h->next->n = temper;
	*head = h->next;
	free(h);
}
