#include "monty.h"

/**
 * process_usage_err - Prints usage error message.
 */
void process_usage_err(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * process_f_open_err - Prints file open error message.
 * @filename: Name of the file that failed to open.
 */
void process_f_open_err(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}

/**
 * process_invalid_op_err - Prints invalid opcode error message.
 * @opcode: Invalid opcode.
 * @line_num: Line number in the file.
 */
void process_invalid_op_err(char *opcode, unsigned int line_num)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_num, opcode);
	exit(EXIT_FAILURE);
}

/**
 * process_malloc_err - Prints memory allocation error message.
 */
void process_malloc_err(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * process_push_err - Prints push argument error message.
 * @line_num: Line number in the file.
 */
void process_push_err(unsigned int line_num)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_num);
	exit(EXIT_FAILURE);
}

