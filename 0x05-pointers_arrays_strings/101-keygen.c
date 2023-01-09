#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int password[100];
	int a, i, tot;

	tot = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		tot += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - tot) - '0' < 78)
		{
			a = 2772 - tot - '0';
			tot += a;
			putchar(a + '0');
			break;
		}
	}

	return (0);
}
