#include "monty.h"

/**
* f_pstr - function that prints the string starting at the top of the stack,
* followed by a new
* @head: head of stack
* @counter: line count
*
* Return: nothing
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *hadid;
	(void)counter;

	hadid = *head;
	while (hadid)
	{
		if (hadid->n > 127 || hadid->n <= 0)
		{
			break;
		}
		printf("%c", hadid->n);
		hadid = hadid->next;
	}
	printf("\n");
}
