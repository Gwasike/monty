#include "monty.h"

int f_execute(char *content, stack_t **head, unsigned int counter, FILE *file)
{
instruction_t opst[] = {
{"push", f_push},
{"swap", f_swap},
{"pall", f_pall},
{"pint", f_pint},
{"div", f_div},
{"rotate", f_rotate},
{"pstr", f_string},
{"add", f_add},
{"pop", f_pop},
{"nop", f_nop},
{"mod", f_mod},
{"stack", f_stack},
{"queue", f_queue},
{"pchr", f_char},
{"mul", f_mul},
{"sub", f_sub},
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