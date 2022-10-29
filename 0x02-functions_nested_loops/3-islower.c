#include "main.h"
/**
 * _islower - check if character is lowercase
 *  @c: char type letter:wq
 *  Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
