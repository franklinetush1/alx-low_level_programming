#include <stdio.h>
/**
 * main - prints the size of various datatypes depending on the system
 * Return:returns 0
 */

int main(void)
{
	char typechar;
	int typeint;
	long int typelong;
	long long int typelonglong;
	float typefloat;

	printf("Size of a char: %zu byte(s)\n", sizeof(typechar));
	printf("Size of an int: %zu byte(s)\n", sizeof(typeint));
	printf("Size of a long int: %zu byte(s)\n", sizeof(typelong));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(typelonglong));
	printf("Size of a float: %zu byte(s)\n", sizeof(typefloat));
	return (0);
}
