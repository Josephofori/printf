#include "main.h"
#include <stdio.h>
/**
 * print_prg - prints character c to stdout
 * @a: input character
 * @buf: buffer pointer
 * @i: index buffer pointer
 * Return: success-1.
 */
int print_prg(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
handl_buff(buf, '%', i);

return (1);
}
