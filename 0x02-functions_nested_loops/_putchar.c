#include "main.h"
#include <unistd.h>
/**
*putchar - writes the character c to stdout
*Return: on success 1
*on error -1 is recorded and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1 &c, 1));
}
