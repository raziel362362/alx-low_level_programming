#include "main.h"
/**
* more_numbers - it prints numbers x10 times
*/

void more_numbers(void)
{
int i, j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1');
		_putchar(j % 10 + 48);
		}
	putchar('\n');
	}

}
