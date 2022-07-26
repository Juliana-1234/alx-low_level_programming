#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line,
 * if you name the program, it will print the new name, without having to
 * complie it again
 * You should not remove the path before the name of the program
 *
 * @argc: This is the arguments count
 * @argv: This is the arguments  vector
 *
 * Return: 0 success.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
