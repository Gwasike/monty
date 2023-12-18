#include "monty.h"

/**
 * f_rotate - Rotates the stack
 * @head: head of the stack
 * @counter: line number of script being executed
*/
void f_rotate(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *copy_str;
copy_str = *head;

if (*head == NULL || (*head)->next == NULL)
{
return;
}
while (copy_str->next)
{
copy_str = copy_str->next;
}
copy_str->next = *head;
copy_str->prev->next = NULL;
copy_str->next = NULL;
(*head)->prev = copy_str;
(*head) = copy_str;

}
