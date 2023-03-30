#include "main.h"
#include <unistd.h>
/**
 * *_punchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 0 on sucess
 * on error, -1 is returned, and errno is set appropriately
 */
int _punchar(char c)
{
	return(write(1, &c, 1));
}
