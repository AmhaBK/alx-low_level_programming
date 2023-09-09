#include <stdio.h>
/**
 * main - for alphabet reverse
 * Return: 0 for success
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	putchar(alp);
	putchar('\n');
	return (0);
}
