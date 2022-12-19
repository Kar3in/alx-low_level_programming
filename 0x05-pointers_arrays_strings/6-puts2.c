#include "main.h"
/**
 * puts2 - prints every other character of a string
 *  starting with the first character
 *  @s: input string
 *  Return: no return
 */
void puts2(char *s)

{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(s[count]);
		count++;
	}
}
