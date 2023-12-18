#include "monty.h"

int f_execute(char *content, stack_t **head, unsigned int counter, FILE *file)
{
instruction_t opst[] = {
{"f_push", f_push},
{"f_swap", f_swap},
{"f_pall", f_pall},
("f_pint", f_pint),
{"f_div", f_div},
{"f_rotate", f_rotate},
{"f_string", f_string},
{"f_add", f_add},
{"f_pop", f_pop},
{"f_nop", f_nop},
{"f_mod", f_mod},
{"f_stack", f_stack},
{"f_queue", f_queue},
{"f_char", f_char},
{NULL, NULL}
};

unsigned int i = 0;
char *j;

j = strtok(content, "\n\t");
if (j && j[0] == '#')
{
return (0);
}
bus.arg = strtok(NULL, "\n\t");
while (opst[i].opcode && j)
{
if (strcmp(j, opst[i].opcode) == 0)
{
opst[i].f(head, counter);
return (0);
}
i++;
}
if (j && opst[i].opcode == NULL)
{
fprintf(stderr, "L%d: Unknown program %s\n", counter, j);
fclose(file);
free(content);
free_stack(*head);
exit(EXIT_FAILURE);
}
return (1);

}