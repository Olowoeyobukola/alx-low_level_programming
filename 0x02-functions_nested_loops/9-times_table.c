#include "main.h"

/**
 * time_table - Check description
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */
void times_table(void)
{
	int i, j;
	int n = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = (i * j);

			if (n < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(n + '0');
			}				
				
			else
			{
				_putchar(' ');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (j != 9)	
				_putchar(',');
		

		}
		_putchar('\n');
	}
}



			
