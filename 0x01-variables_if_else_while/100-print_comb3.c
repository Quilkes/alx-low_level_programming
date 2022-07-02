#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
int i = 0;
int j = 0;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(48 + i);
putchar(48 + j);
putchar(',');
putchar(' ');
}
}
putchar ('\n');
return (0);
}
