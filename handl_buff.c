#include "main.h"

/**
 * handl_buff - concatenates the buffer characters
 * @buf: buffer pointer
 * @c: charcter to concatenate
 * @ibuf: index 
 * Return: buffer pointer index.
 */
unsigned int handl_buff(char *buf, char c, unsigned int ibuf)
{
if (ibuf == 1024)
{
print_buff(buf, ibuf);
ibuf = 0;
}
buf[ibuf] = c;
ibuf++;
return (ibuf);
}
