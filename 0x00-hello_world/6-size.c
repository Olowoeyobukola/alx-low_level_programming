#include <stdio.h>
/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sideof(char));
	printf("Size of a int: %d byte(s)\n", sideof(int));
	printf("Size of a long int: %d byte(s)\n", sideof(long int));
	printf("Size of a long long int: %d byte(s)\n", sideof(long long int));
	printf("Size of a float: %d byte(s)\n", sideof(float));
	return (0);
}
