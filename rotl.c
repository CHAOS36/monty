#include "monty.h"

/**
* f_rotl- function that rotates the stack to the top
* @head: head of the stack
* @counter: line count
*
* Return: nothing
*/
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tepe = *head, *auxil;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auxil = (*head)->next;
	auxil->prev = NULL;
	while (tepe->next != NULL)
	{
		tepe = tepe->next;
	}
	tepe->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tepe;
	(*head) = auxil;
}
