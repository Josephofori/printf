#include "main.h"

/**
 * fill_binary_array - prints number to binary
 * @binary: binary pointer
 * @int_in: input num
 * @isneg: checks for negative input number
 * @limit: binary size
 * Return: chars printed.
 */
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit)
{
int a;

for (a = 0; a < limit; a++)
binary[a] = '0';
binary[limit] = '\0';
for (a = limit - 1; int_in > 1; a--)
{
if (int_in == 2)
binary[a] = '0';
else
binary[a] = (int_in % 2) + '0';
int_in /= 2;
}
if (int_in != 0)
binary[a] = '1';
if (isneg)
{
for (a = 0; binary[a]; a++)
if (binary[a] == '0')
binary[a] = '1';
else
binary[a] = '0';
}
return (binary);
}
