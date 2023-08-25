#include "monty.h"

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);

/**
 * push - function that pushes an element to the stack
 * @stack: stack parameter
 * @line_number: unsigned int parameter
 * Return: Nothing
 */

void push(stack_t **stack, unsigned int line_number)
{
    char *arg = strtok(NULL, " \n\t\r");
    int n;

    if (arg == NULL || !is_integer(arg))
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    n = atoi(arg);
    add_node(stack, n);
}

/**
 * pall - prints all values of stack starting from the top
 * @stack: stack_t parameter
 * @line_number: unsigned int
 * Return: Nothing
 */

void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
