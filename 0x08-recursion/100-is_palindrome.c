#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int length, int x);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += find_strlen(s + length);
	}

	return (length);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @length: The length of s.
 * @x: The index of the string to be checked.
 *
 * Return: If a palindrome - 1.
 *         If not a palindrome - 0.
 */
int check_palindrome(char *s, int length, int x)
{
	if (s[x] == s[length / 2])
		return (1);

	if (s[x] == s[length - x - 1])
		return (check_palindrome(s, length, x + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If a palindrome - 1.
 *         If not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int x = 0;
	int length = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, length, x));
}
