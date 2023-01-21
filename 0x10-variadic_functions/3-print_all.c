#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * pr_int - print a integer type;
 * @value: a va_list struct to process;
 */
void pr_int(va_list value)
{
	printf("%d", va_arg(value, int));
}

/**
 * pr_char - print a char type;
 * @value: a va_list struct to process;
 */
void print_char(va_list value)
{
	printf("%c", va_arg(value, int));
}

/**
 * pr_float - prints a double type;
 * @value: a va_list struct to process;
 */
void print_float(va_list value)
{
	printf("%f", va_arg(value, double));
}

/**
 * pr_str - print a string type or (nil) if empty/NULL;
 * @value: a va_list struct to process;
 */
void print_str(va_list value)
{
	char *r;

	r = va_arg(value, char *);
	switch (!r)
	{
	case 0:
		printf("%s", r);
		break;
	case 1:
		printf("(nil)");
		break;
	}

}

/**
 * print_all - prints all arguments that match with format.
 * @format: type to print out.
 * @...: arguments to print.
 * Return: 0
 */
void print_all(const char * const format, ...)
{

	int a, b;
	va_list va;
	prnt ops[] = {
		{"c", print_char},
		{"i", pr_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(va, format);
	a = b = 0;
	while (format && format[b])
	{
		a = 0;
		while (ops[a].op)
		{
			if (ops[a].op[0] == format[b])
			{
				(ops[a].f)(va);
				if (format[b + 1])
					printf(", ");
			}
			a++;
		}
		b++;

	}
	putchar(10);
	va_end(va);
}


