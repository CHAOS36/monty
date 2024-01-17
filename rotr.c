#include "monty.h"

/**
* f_rotr - function that rotates the stack to the bottom
* @head: stack head of the stack
* @counter: line count
*
* Return: nothing
*/
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *kouz;

	kouz = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (kouz->next)
	{
		kouz = kouz->next;
	}
	kouz->next = *head;
	kouz->prev->next = NULL;
	kouz->prev = NULL;
	(*head)->prev = kouz;
	(*head) = kouz;
}
