#include "calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the correct function to perform the operation.
 * @s: the operator
 * @a:
 * @b:
 * Return: integr.
 */
int (*get_op_func(char *s))(int a, int b)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
ops[]->op;
ops[]->f(a, b);
}

