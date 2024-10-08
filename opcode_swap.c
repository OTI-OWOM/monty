#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack
 * @stack: The head of the stack
 * @line_number: Line number of the command in the bytecode file
 *
 * Return: Nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
unsigned int length = 0, temp = 0;

length = count_stack(*stack);

if (length < 2)
handle_error(ERR_SWAP, NULL, line_number, NULL);

if (*stack)
{
temp = (*stack)->n;
(*stack)->n = (*stack)->next->n;
(*stack)->next->n = temp;
}
}
