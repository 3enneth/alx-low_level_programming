#include <stdio.h>
/**
 * main -is the entry point for the program.
 *
 * Return:zero if no error, Non-zero value if errors.
 */
int main(void)
{
printf("Size of a char: %Id byte(s)\n", sizeof(char));
printf("Size of an int: %Id byte(s)\n", sizeof(int));
printf("Size of a long int: %Id byte(s)\n", sizeof(long int));
printf("Size of a long long int: %Id byte(s)\n", sizeof(long long));
printf("Size of a float: %Id byte(s)\n", sizeof(float));
return (0);
}
