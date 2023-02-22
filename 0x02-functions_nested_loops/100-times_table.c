#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int result, num2, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar(48);
			for (num2 = 1; num2 <= n; ++num2)
			{
				_putchar(',');
				_putchar(' ');

				result = num * num2;

				if (result <= 9)
					_putchar(' ');
				if (result <= 99)
					_putchar(' ');

				if (result >= 100)
				{
					_putchar((result / 100) + 48);
					_putchar((result / 10) % 10 + 48);
				} else if (result <= 99 && result >= 10)
					_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
