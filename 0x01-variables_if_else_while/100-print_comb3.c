#include <stdio.h>
/**
 * main - for base 16
 * Return: 0 for success
 */
int main(void)
{
	int d;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	for (d = i + 1; d <= '9'; d++)
	{
	if (d != i)
	{
	putchar(i);
	putchar(d);
	if (i == '8' && d == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
