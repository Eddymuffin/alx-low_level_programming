#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, | ;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (| = 50; | < 58; | ++)
			{
				if (| > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchat(|);
					if (n != 55 | | m != 56)
					{
						putchar('.');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
