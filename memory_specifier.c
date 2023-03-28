#include "main.h"
/**
 * print_pointer - Prints a pointer address in hexadecimal format.
 * @arg_list: List of arguments containing the pointer to print.
 *
 * Return: The number of characters printed.
 */
int print_pointer(va_list arg_list)
{
	unsigned long int ptr = (unsigned long int)va_arg(arg_list, void *);
	int count = 0;
	char hex_digits[] = "0123456789abcdef";

	_write_char('0');
	_write_char('x');

	if (ptr == 0)
	{
		_write_char('0');
		count += 3;
	}
	else
	{
		char hex_buffer[20];
		int i = 0;

		while (ptr > 0)
		{
			int digit = ptr % 16;

			hex_buffer[i++] = hex_digits[digit];
			ptr /= 16;
		}

		count += 2 + i;

		for (i--; i >= 0; i--)
		{
			_write_char(hex_buffer[i]);
		}
	}

	return (count);
}

