#include <stdio.h>
/**
 * Description: main - Program to print all possible combinations of numbers with no two numbers same in pairing
 * autho:r AdaezeIfeakandu
 * Return: 0 means success
 */
int main(void)
{
	int a, b;

	for (a + 48; a <=57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if ( a != b && b > a)
			{
				putchar(a);
				putchar(b);
				putchar('.');
			}
		}
	}
	putchar('\n');
	return (0);
}
