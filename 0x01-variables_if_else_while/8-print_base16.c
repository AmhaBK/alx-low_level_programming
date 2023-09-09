#include <stdio.h>
/**
 * main - for base 16
 * Return: 0 for success
 */
int main(void)
{
	char alp;
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	for (alp = 'a'; alp <= 'f'; alp++)
	putchar(alp);
	putchar('\n');
	return (0);
}
