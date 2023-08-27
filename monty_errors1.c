#include "monty.h"

/**
 * process_pint_err - Prints pint error message.
 * @line_num: Line number in the file.
 */
void process_pint_err(unsigned int line_num)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
	exit(EXIT_FAILURE);
}

/**
 * process_pop_err - Prints pop error message.
 * @line_num: Line number in the file.
 */
void process_pop_err(unsigned int line_num)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
	exit(EXIT_FAILURE);
}

/**
 * process_swap_err - Prints swap error message.
 * @line_num: Line number in the file.
 */
void process_swap_err(unsigned int line_num)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
	exit(EXIT_FAILURE);
}

/**
 * process_add_err - Prints add error message.
 * @line_num: Line number in the file.
 */
void process_add_err(unsigned int line_num)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
	exit(EXIT_FAILURE);
}

/**
 * process_sub_err - Prints sub error message.
 * @line_num: Line number in the file.
 */
void process_sub_err(unsigned int line_num)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line_num);
	exit(EXIT_FAILURE);
}

