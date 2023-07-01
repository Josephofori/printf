#include "main.h"

/**
 * print_hex - prints to hexadecimal
 * @arguments: input
 * @buf: pointer
 * @ibuf: index
 * Return: char printed
 */
int print_hex(va_list arguments, char *buf, unsigned int ibuf)
{
int int_input, a, isneg, clock, first_digit;
char *hexad, *binary;

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
hexad = malloc(sizeof(char) * (8 + 1));
hexad = fill_hex_array(binary, hexad, 0, 8);
for (first_digit = a = clock = 0; hexad[a]; a++)
{
if (hexad[a] != '0' && first_digit == 0)
first_digit = 1;
if (first_digit)
{
ibuf = handl_buff(buf, hexad[a], ibuf);
clock++;
}
}
free(binary);
free(hexad);
return (clock);
}
