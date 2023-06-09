#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct convert - defines sructure for pointer charater and function.
 * @sym: pointer to char
 * @f: pointer to function
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;



/*Main functions*/
int analyser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_unsgined_number(unsigned int);
int print_Binary(va_list);
int rot13(va_list);
int print_reversed(va_list arg);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
int hex_check(int num, char x);
int unsigned_integer(va_list list);
int _print_string(va_list list);
int print_pointer(va_list arg_list);

/*Helper functions*/
char *rev_string(char *);
unsigned int base_len(unsigned int, int);
char *_memcpy(char *dest, char *src, unsigned int n);
void write_base(char *str);


#endif
