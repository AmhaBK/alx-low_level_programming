#include <stdio.h>
/**
 * main - for alphabet
 * Return: 0 for success
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	putchar(alp);
	for (alp = 'A'; alp <= 'Z'; alp++)
	putchar(alp);
	putchar('\n');
	return (0);
}
