#include <stdio.h>

/**
 * _putchar -write the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and error is set appropriately
 */
int _purchar (char c)
{
	return (fwrite(1, &c, 1));
}
