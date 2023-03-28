#include "main.h"
/**
 * _print_string - Prints a string
 * @list: A list of arguments
 *
 * Return: The number of characters printed
 */
int _print_string(va_list list)
{
	char *string;
	int print_count, pc = 0, n = 1;

	string = va_arg(list, char *);

	if (string == NULL)
	{
		string = "(null)";
	}
	for (print_count = 0; string[print_count] != '\0'; print_count++)
	{
		if (string[print_count] < 32 || string[print_count] >= 127)
		{
			_write_char('\\');
			_write_char('x');
			pc += 2;
			n = (((int)string[print_count]) / 16);
				if (string[print_count] < 16)
			{
				pc += 2;
				_write_char('0');
				_write_char("0123456789ABCDEF"[(int)string[print_count]]);
			}
			else
			{
				pc += 2;
				_write_char(n + '0');
				_write_char("0123456789ABCDEF"[(int)string[print_count] - 16 * n]);
			}
		}
		else
		{
			_write_char(string[print_count]);
		}
	}
	return (print_count + pc);
}
