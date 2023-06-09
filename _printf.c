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
		{"S", _print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_Binary},
		{"R", rot13},
		{"r", print_reversed},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"p", print_pointer},
		{"x", print_hex},
		{"X", print_heX},
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

