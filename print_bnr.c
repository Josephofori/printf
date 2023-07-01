#include "main.h"

/**
 * print_bnr - prints the number to binary
 * @arguments: input
 * @buf: pointer
 * @ibuf: index
 * Return: chars that will be printed.
 */
int print_bnr(va_list arguments, char *buf, unsigned int ibuf)
{
int int_input, clock, a, first_one, isneg;
char *binary;

int_input = va_arg(arguments, int);
isneg = 0;
if (int_input == 0)
{
ibuf = handl_buff(buf, '0', ibuf);
return (1);
}
if (int_input < 0)
{
int_input = (int_input * -1) - 1;
isneg = 1;
}
binary = malloc(sizeof(char) * (32 + 1));
binary = fill_binary_array(binary, int_input, isneg, 32);
first_one = 0;
for (clock = a = 0; binary[a]; a++)
{
if (first_one == 0 && binary[a] == '1')
first_one = 1;
if (first_one == 1)
{
ibuf = handl_buff(buf, binary[a], ibuf);
clock++;
}
}
free(binary);
return (clock);
}
