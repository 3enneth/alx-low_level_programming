#include "main.h"
/**
 * string_toupper - convert string to upper
 * @word: pointer arg 1
 * Return: String in uppercase
 */

char *string_toupper(char *word)

{
	int i;

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] > 96 && word[i] < 123)
		word[i] -= 32;
	}
	return (word);
}
