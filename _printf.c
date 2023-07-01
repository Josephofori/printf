#include "main.h"

/**
 * _printf - it outputs formatted data and conversion
 * @format: input format string.
 *
 * Return: chars printed.
 */
int _printf(const char *format, ...)
{
unsigned int i = 0, length = 0, ibuf = 0;
va_list arguments;
int (*function)(va_list, char *, unsigned int);
char *buffer;

va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
if (!buffer || !format || (format[i] == '%' && !format[i + 1]))
return (-1);
if (!format[i])
return (0);
for (i = 0; format[i] && format; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == '\0')
{
print_buff(buffer, ibuf), free(buffer), va_end(arguments);
return (-1);
}
else
{
function = get_print_funct(format, i + 1);
if (function == NULL)
{
if (format[i + 1] == ' ' && !format[i + 2])
return (-1);
handl_buff(buffer, format[i], ibuf), length++, i--;
}
else
{
length += function(arguments, buffer, ibuf);
i += ev_print_funct(format, i + 1);
}
} i++;
}
else
handl_buff(buffer, format[i], ibuf), length++;
for (ibuf = length; ibuf > 1024; ibuf -= 1024)
;
}
print_buff(buffer, ibuf), free(buffer), va_end(arguments);
return (length);
}
