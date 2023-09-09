#include <stdio.h>
/**
 * main - for base 16
 * Return: 0 for success
 */
int main(void)
{
	int d;
	int i;
	int q;

	for (d = '0'; d < '9'; i++)
	{
	for (i = d + 1; i <= '9'; i++)
	{
	for (q = i + 1; q <= '9'; q++)
	{
	if ((i != d) != q)
	{
	putchar(d);
	putchar(i);
	putchar(q);
	if (d == '7' && i == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
