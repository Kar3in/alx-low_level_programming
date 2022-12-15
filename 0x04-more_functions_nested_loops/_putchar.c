#include "main.h"
#include <unistd.h>
/**
 * putchar -writes the character c to stand out
 * @c: The character to print
 * Return: On success 1
 * on error -1 is recorded and errno is set appropriately
 */
int _putchar(char c)
{
return (write(1 &c, 1));
}
