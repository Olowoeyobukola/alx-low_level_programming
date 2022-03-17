#include "main.h"

/**
 * print_last_digit - Check Holberton
 * @r: An integre input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */

int print_last_digit(int r)
{

	r %= 10;

	if (r < 0)
		r *= -1;

	_putchar(r + '0');
	return (r);
}
