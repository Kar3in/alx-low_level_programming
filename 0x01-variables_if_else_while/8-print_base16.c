#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 and letters between Aa to Ff
 * Return: Always 0 (Success)
 */
int main(void)
{
int h;
for (h = 48; h < 58; h++)
{
putchar(h);
}
for (h = 97; h < 103; h++)
{
putchar(h);
}
putchar('\n');
return (0);
}
