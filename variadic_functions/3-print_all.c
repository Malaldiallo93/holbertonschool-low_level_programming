#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Write a function that prints anything
 * @char: input
 * @format: is a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c_val;
	int i_val;
	double d_val;
	char *s_val;

	int i = 0;
	char format_specifier;

	va_start(args, format);

	while (format && format[i])
	{
		format_specifier = format[i];

		if (format_specifier == 'c')
		{
			c_val = va_arg(args, int);
			printf("%c", c_val);
		}
		else if (format_specifier == 'i')
		{
			i_val = va_arg(args, int);
			printf("%d", i_val);
		}
		else if (format_specifier == 'f')
		{
			d_val = va_arg(args, double);
			printf("%f", d_val);
		}
		else if (format_specifier == 's')
		{
			s_val = va_arg(args, char *);
		if (s_val == NULL)
			printf("(nil)");
		else
			printf("%s", s_val);
		}

		i++;
		if (format[i] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
				printf(", ");
		}
			printf("\n");

			va_end(args);
}
