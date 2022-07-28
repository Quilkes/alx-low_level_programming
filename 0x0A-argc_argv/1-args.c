#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: array of pointer to argument strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
/* to suppress unused variable warning */
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
