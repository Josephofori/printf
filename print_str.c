#include "main.h"
/**
 * print_str - print string
 * @arguments: input
 * @buf: pointer
 * @ibuf: index for buffer pointer
 * Return: success-1.
 */
int print_str(va_list arguments, char *buf, unsigned int ibuf)
{
char *str;
unsigned int d;
char nill[] = "(null)";

str = va_arg(arguments, char *);
if (str == NULL)
{
for (d = 0; nill[d]; d++)
ibuf = handl_buff(buf, nill[d], ibuf);
return (6);
}
for (d = 0; str[d]; d++)
ibuf = handl_buff(buf, str[d], ibuf);
return (d);
}
