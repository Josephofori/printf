#include "main.h"

/**
 * ev_print_funct - returns identifiers.
 * @s: argument indentifier
 * @index: index 
 * Return: identifiers amount
 */
int ev_print_funct(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_chr}, {"s", print_str}, {"i", print_int},
		{"d", print_int}, {"b", print_bnr}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex}, {"X", print_upx},
		{" %", print_prg},
		{NULL, NULL},
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
return (b);
}
