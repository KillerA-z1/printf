# printf
This is a simple implementation of printf function that formats and prints data.

## Description
_printf() function produces output according to a format which are described below.

The available conversion specifiers are:

+ %c: Prints a single character.
+ %s: Prints a string of characters.
+ %S: Prints Non printable characters \x followed by the ASCII code value in hexadecimal (upper case - always 2 characters).
+ %r: Prints a reversed string
+ %R: Prints the Rot13 interpretation of a strin
+ %d: Prints integers.
+ %i: Prints integers.
+ %b: Prints the binary representation of an unsigned decimal.
+ %o: Prints unsigned decimal.
+ %u: Prints unsigned octal.
+ %x: Prints the hexadecimal representation of an unsigned decimal in lowercase letters.
+ %X: Prints the hexadecimal representation of an unsigned decimal in uppercase letters.
+ %p: print the memory address of a variable or a pointer in hexadecimal format.

## Usage
+ The `_printf` function was coded on an Ubuntu 20.04.01 LTS machine with `gcc` version 9.4.0.
+ Compile your code with gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
+ Include the "main.h" header file on any main function.

Example `main.c`:
```
#include "main.h"

int main(void)
{
    _printf("Hello, World!");

    return (0);
}
```

Compilation:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -0 test
```

Output:
```
$ ./test
Hello, World!
$
```

## Authors :black_nib:

* Ahmed Abdulwahid -[KillerA-z1](https://github.com/KillerA-z1)
* BAZEZEW DEFERSHA -[baze1918](https://github.com/baze1918)

