#include "main.h"
/**
 * rot13 - Encodes a string using rot13 encryption
 *
 * @list: A va_list containing the string to be encoded
 *
 * Return: The length of the encoded string, or -1 on failure
 */
int rot13(va_list list)
{
	int i, x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    /* Retrieve the string argument from the va_list */
	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);

	/* Loop through each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Check if the character is in the array of letters */
	for (x = 0; x <= 52; x++)
	{
		if (str[i] == s[x])
		{
			/* Write the corresponding rot13 letter to stdout */
			_write_char(u[x]);
			break;
		}
	}

	/* If the character is not in the array, write it as is */
	if (x == 53)
		_write_char(str[i]);
	}

	/* Return the length of the encoded string */
	return (i);
}

