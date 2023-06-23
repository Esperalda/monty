#include "monty.h"

/**
 * _stack - This sets the format of the data to a stack (LIFO).
 * This is the default behavior of the program.
 * @stack: This is the Pointer to head of stack (or queue)
 * @line_number:The Current line number
 *
 * Return: No Return
 */
void _stack(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	globm.mode = 0;
}
/**
 * _queue -  This sets the format of the data to a queue (FIFO).
 * @stack: This is the Pointer to head of stack (or queue)
 * @line_number: This is the Current line number
 *
 * Return: No Return
 */
void _queue(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	globm.mode = 1;
}
