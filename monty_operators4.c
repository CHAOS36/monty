#include "monty.h"

/**
* f_pall - function that prints everything in the stack
* @head: double head pointer to the stack
* @counter: unused line count
*
* Return: nothing
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *p;
	(void)counter;

	p = *head;
	if (p == NULL)
		return;
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
	}
}

/**
* f_swap - function that swaps the top two elements of the stack
* @head: head of stack
* @counter: line count
*
* Return: nothing
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *p;
	int length = 0, tepe;

	p = *head;
	while (p)
	{
		p = p->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	p = *head;
	tepe = p->n;
	p->n = p->next->n;
	p->next->n = tepe;
}
