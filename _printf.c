#include "main.h"

int _printf(const char *format, ...);

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_Binary},
<<<<<<< HEAD
		 {"R", rot13},
=======
		{"r", print_reversed},
>>>>>>> f3e1e7fa9761432b4fb34c8055ced97230f937b1
		{NULL, NULL}
	};

	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*Calling parser function*/
	printed_chars = analyser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}

