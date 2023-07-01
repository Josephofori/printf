#include "main.h"

/**
 * print_int - prints the integer
 * @arguments: input
 * @buf: pointer
 * @ibuf: index
 * Return: chars printed.
 */
int print_int(va_list arguments, char *buf, unsigned int ibuf)
{
int int_input;
unsigned int int_in, a, int_temp, isnegative, div;

int_input = va_arg(arguments, int);
isnegative = 0;
if (int_input < 0)
{
int_in = int_input * -1;
ibuf = handl_buff(buf, '-', ibuf);
isnegative = 1;
}
else
{
int_in = int_input;
}

int_temp = int_in;
div = 1;

while (int_temp > 9)
{
div *= 10;
int_temp /= 10;
}

for (a = 0; div > 0; div /= 10, a++)
{
ibuf = handl_buff(buf, ((int_in / div) % 10) + '0', ibuf);
}
return (a + isnegative);
}
