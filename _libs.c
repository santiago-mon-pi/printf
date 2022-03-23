#include "main.h"

/**
 * _len - print the length of the string
 * @str: string
 *
 * Return: length of char
 */

int _len(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	};
	return (i);
}

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
