#include "monty.h"

/**
 * pall - prints the elements of the stack
 * @head: pointer to the pointer to the head of the string
 * @counter: number of lines
 * Return: void
*/
void pall(stack_t **head, unsigned int counter __attribute__((unused)))
{
print_stack(*head);
}