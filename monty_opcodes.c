#include "monty.h"

/**
 * process_push - Adds a new element to the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_num: Line number in the file.
 */
void process_push(stack_t **stack, unsigned int line_num)
{
	int value, i = 0, is_negative = 0;

	if (!bus.arg)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}

	if (bus.arg[i] == '-')
	{
		is_negative = 1;
		i++;
	}

	while (bus.arg[i] != '\0')
	{
		if (!isdigit(bus.arg[i]))
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_num);
			exit(EXIT_FAILURE);
		}
		i++;
	}

	value = atoi(bus.arg);
	if (is_negative)
		value *= -1;

	process_push(stack, value);
}

/**
 * process_pall - Prints all the elements in the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_num: Line number in the file.
 */
void process_pall(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	(void)line_num;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

/**
 * process_pint - Prints the top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_num: Line number in the file.
 */
void process_pint(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}

/**
 * process_pop - Removes the top element from the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_num: Line number in the file.
 */
void process_pop(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}

	process_pop(stack, line_num);
}

/**
 * process_swap - Swaps the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_num: Line number in the file.
 */
void process_swap(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	process_swap(stack, line_num);
}

