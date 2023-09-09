#include <stdio.h>
/**
 * main - for alphabet
 * Return: 0 for success
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
	if (alp != 'e' && alp != 'q')
	putchar(alp);
	}
	putchar('\n');
	return (0);
}
