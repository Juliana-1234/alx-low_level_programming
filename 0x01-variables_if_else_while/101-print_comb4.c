#include <stdio.h>

/**
 *main -> Prints all possible combinations of two different digits,
 *
 *Return : always 0
 */
int main(void)
{
	int ch;
	int n;
	int m;
	for (ch = 48; ch <=57; ch++)
	{
		for (n = 49; n <= 57; n++)
		{
			for m = 50; m <= 57; n++)
			{
				if (n > ch && m > n)
				{
					putchar(ch);
					putchar(n);
					putchar(m);
					if (ch != 56; || n != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}

	putchar(10);

	return(0);
}