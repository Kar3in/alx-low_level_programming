#include "main.h"
#include <stdio.h>
/**
 * main - prints Fizz for multiples of 3
 * Buzz for multiples of 5
 * and FizzBuzz for multiplesof both
 * Return: Always 0
 */
int main(void)
{
int n;
n = 1;
for (n = 2; n <= 100; n++)
{
if ((n % 3 == 0) && (n % 5 == 0))
{
_putchar("FizzBuzz");
}
else if (n % 3 == 0)
{
_putchar("Fizz");
}
else if (n % 5 == 0)
{
_putchar("Buzz");
}
else
{
_putchar(n);
}
}
_putchar('\n');
return (0);
}
