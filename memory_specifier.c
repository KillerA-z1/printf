#include "main.h"

/**
 * print_pointer - Prints a pointer address in hexadecimal format.
 * @arg_list: List of arguments containing the pointer to print.
 *
 * Return: The number of characters printed.
 */

int print_pointer(va_list arg_list)
{
	char buffer[20];
	int count = 0;
	char *ptr_buffer = buffer;
	unsigned long int ptr = (unsigned long int) va_arg(arg_list, void*);

	sprintf(buffer, "0x%lX", ptr);
	while (*ptr_buffer)
	{
		_write_char(*ptr_buffer);
		count++;
		ptr_buffer++;
	}
	return (count);
}
