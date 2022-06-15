#include "monty.h"

/**
 * op_pall - prints all the values in the stack top to botom
 * @stack: double pointer to the head of stack
 * @line_number: the line number being executed
 * Return: void
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	(void)(line_number);

	head = *stack;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		if (head == *stack)
			return;
	}
}
