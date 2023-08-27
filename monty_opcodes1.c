#include "monty.h"

/**
 * process_add - Adds the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_num: Line number in the file.
 */
void process_add(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	process_pop(stack, line_num);
}

/**
 * process_nop - Does nothing.
 * @stack: Double pointer to the head of the stack.
 * @line_num: Line number in the file.
 */
void process_nop(stack_t **stack, unsigned int line_num)
{
	(void)stack;
	(void)line_num;
}

/**
 * process_sub - Subtracts the top element.
 * @stack: Double pointer to the head of the stack.
 * @line_num: Line number in the file.
 */
void process_sub(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n -= (*stack)->n;
	process_pop(stack, line_num);
}

/**
 * process_div - Divides the second top element.
 * @stack: Double pointer to the head of the stack.
 * @line_num: Line number in the file.
 */
void process_div(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_num);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n /= (*stack)->n;
	process_pop(stack, line_num);
}

/**
 * process_mul - Multiplies the second top element.
 * @stack: Double pointer to the head of the stack.
 * @line_num: Line number in the file.
 */
void process_mul(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n *= (*stack)->n;
	process_pop(stack, line_num);
}

