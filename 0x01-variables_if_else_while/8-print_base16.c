#include <stdio.h>

/**
* main - Print the numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
		char t;

		for (t = '0'; t <= '9'; t++)
		putchar(t);

		for (t = 'a'; t <= 'f'; t++)
		putchar(t);

		putchar('\n');

	return (0);
}
