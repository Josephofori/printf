#include "main.h"
#include <stdio.h>
/**
 * print_char - write character c to stdout
 * @arguments: input character
 * @buf: buffer pointer
 * @ibuf: buffer pointer index
 * Return: success- 1.
 */
int print_char(va_list arguments, char *buf, unsigned int ibuf)
{
char c;

c = va_arg(arguments, int);
handl_buff(buf, c, ibuf);

return (1);
}
