#include <stdio.h>

/**
 *main - Prints all possible combinations of single-digit numbers.
 *
 *Return: Always 0.
 *
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 97; ch++)
	{

		putchar(ch);
		if (ch != 57)

		putchar(44);
		putchar(32);

	}
	continue;
	
	putchar(10);

	return (0);
}
