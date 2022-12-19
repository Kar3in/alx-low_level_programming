#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: no return
 */

void puts_half(char *str)

{
	int count = 0, m;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	if (count % 2 == 1)
		m = count / 2;
	else
		m = (count - 1) / 2;

	for (m++; m < count; m++)
		_putchar(str[m]);
	_putchar('\n');
}

