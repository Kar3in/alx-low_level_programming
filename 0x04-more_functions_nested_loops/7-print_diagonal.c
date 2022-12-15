#include "main.h"
/**
 * print_diagonal - prints diagonal line n times
 * @n: times diagonal line is printed
 * Return: no return
 */
void print_diagonal(int n)
{
int i, m;
for (i = 0; i < n; i++)
{
for (m = 0; m < i; m++)
{
_putchar(' ');
}
_putchar(92);
if (i < (m - 1))
_putchar('\n');
}
_putchar('\n');
}
