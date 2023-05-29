#include "main.h"
#define S_LONG 1
#define S_SHORT 2
/**
 * get_size - Calculates the size to cast the argument.
 * @format: Formatted string that will print the arguments.
 * @i: List of arguments that will be printed.
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
int curr_i = *i + 1;
int size = 0;
if (format[curr_i] == 'l')
size = S_LONG;
else if (format[curr_i] == 'h')
size = S_SHORT;
if (size == 0)
*i = curr_i - 1;
else
*i = curr_i;
return (size);
}
