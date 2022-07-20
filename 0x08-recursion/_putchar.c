#include <unistd.h>

/**
 * _putchar - Function that writes a character to the screen
 * @c : variable that accepts the character
 * return : on success returns the character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}	
