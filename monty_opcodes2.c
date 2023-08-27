#include "monty.h"

/**
 * process_mod - Computes the modulo of the second top element.
 * @stack: Double pointer to the head of the stack.
 * @line_num: Line number in the file.
 */
void process_mod(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_num);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n %= (*stack)->n;
	process_pop(stack, line_num);
}

/**
 * process_pchar - Prints the char value at the top of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_num: Line number in the file.
 */
void process_pchar(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_num);
		exit(EXIT_FAILURE);
	}

	putchar((*stack)->n);
	putchar('\n');
}

/**
 * process_rotr - Rotates the stack to the bottom.
 * @stack: Double pointer to the head of the stack.
 * @line_num: Line number in the file.
 */
void process_rotr(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;
	int last_val;

	(void)line_num;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (temp->next != NULL)
		temp = temp->next;

	last_val = temp->n;

	process_pop(stack, line_num);

	process_add_node(stack, last_val);
}

/**
 * process_queue - Sets the format of the data to a queue (FIFO).
 * @stack: Double pointer to the head of the stack.
 * @line_num: Line number in the file.
 */
void process_queue(stack_t **stack, unsigned int line_num)
{
	(void)stack;
	(void)line_num;

	bus.lifo = 0;
}

/**
 * process_stack - Sets the format of the data to a stack (LIFO).
 * @stack: Double pointer to the head of the stack.
 * @line_num: Line number in the file.
 */
void process_stack(stack_t **stack, unsigned int line_num)
{
	(void)stack;
	(void)line_num;

	bus.lifo = 1;
}

