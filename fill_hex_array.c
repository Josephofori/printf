#include "main.h"

/**
 * fill_hex_array - prints the character c
 *
 * @bnr: array to store binary.
 * @hex: array to store the hexadecimal.
 * @isupp: integer checking if the hexadecimal array is
 * in lowercase or uppercase letter.
 * @limit: hex size
 * Return: binary array.
 */
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit)
{
int op, a, b, lettereq;

hex[limit] = '\0';
if (isupp)
lettereq = 55;
else
lettereq = 87;
for (a = (limit * 4) - 1; a >= 0; a--)
{
for (op = 0, b = 1; b <= 8; b *= 2, a--)
op = ((bnr[a] - '0') * b) + op;
a++;
if (op < 10)
hex[a / 4] = op + 48;
else
hex[a / 4] = op + lettereq;
}
return (hex);
}
