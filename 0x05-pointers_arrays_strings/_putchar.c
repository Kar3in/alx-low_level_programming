#include "main.h"
#include <unistd.h>
/**
*_putchar - writes the character c to standard
*Returns: 1 on success
*On error -1 is recorded and errno is set appropriately
*/
int _putchar(char c)
{
return (write (1 &c, 1));
}
