#include "main.h"

/**
 * get_print_funct - select function for specific operation.
 * @s: argument 
 * @index: index argument
 * Return: pointer to a function.
 */
int (*get_print_funct(const char *s, int index))(va_list, char *, unsigned int)
{
print_t pr[] = {
		{"c", print_chr}, {"s", print_str},
		{"i", print_int}, {"d", print_int},
		{"b", print_bnr}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex},
		{" %", print_prg}, {NULL, NULL},
	};
int a = 0, b = 0, first_index;

first_index = index;
while (pr[a].type_arg)
{
if (s[index] == pr[a].type_arg[b])
{
if (pr[a].type_arg[b + 1] != '\0')
index++, b++;
else
break;
}
else
{
b = 0;
a++;
index = first_index;
}
}
return (pr[a].f);
}
