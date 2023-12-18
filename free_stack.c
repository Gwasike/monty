#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: The head of the stack
*/
void free_stack(stack_t *head)
{
stack_t *j;

j = head;
while (head)
{
j = head->next;
free(head);
head = j;
}
}
