#include "holberton.h"
#define INT_BITS (4 * 8)
#define STDOUT 1

int subc2(char *new_pointer, va_list list, int buff_cou);
int subs2(char *new_pointer, va_list list, int buff_cou);
int subi2(char *new_pointer, va_list list, int buff_cou);

/**
 * printerr - prints a string like output according to a format.
 * @format: Is a character string, it is composed of zero or more directives.
 *
 * Description: printerr writes the output to stdout.
 * Return: The number of characters printed, avoiding the end null byte.
 */
int printerr(const char *format, ...)
{
	int counter = 0, buff_cou = 0;
	char new_pointer[2048];
	va_list list;

	va_start(list, format);

	if (format == NULL)
		return (-1);
	for (counter = 0; format != NULL && format[counter] != '\0'; counter++)
	{
		if (format[counter] == '%')
		{
			counter++;
			switch (format[counter])
			{
			case 's':
				buff_cou = subs2(new_pointer, list, buff_cou);
				break;
			case 'c':
				buff_cou = subc2(new_pointer, list, buff_cou);
				break;
			case 'i': case 'd':
				buff_cou = subi2(new_pointer, list, buff_cou);
				break;
			case '%':
				new_pointer[buff_cou] = '%', buff_cou++;
				break;
			case '\0':
				return (-1);
			default:
				counter--;
				new_pointer[buff_cou] = '%';
				new_pointer[buff_cou] = format[counter];
				buff_cou++;
			}
		}
		else
		{
			new_pointer[buff_cou] = format[counter], buff_cou++;
		}
	}
	new_pointer[buff_cou] = '\0';		/* setting end character */
	write(STDERR_FILENO, new_pointer, buff_cou);/* salida del buffer */
	va_end(list);
	return (buff_cou);
}
/**
 * subi2 - substitute %i by argument number
 * @new_pointer: string to change
 * @list: va_list char to change
 * @buff_cou: index of dst where the c of %c is
 * Return: New index
 */
int subi2(char *new_pointer, va_list list, int buff_cou)
{
	int tens = 1;
	unsigned int tmp;
	int number;

	number = va_arg(list, int);

	if (number < 0)
	{
		new_pointer[buff_cou] = '-';
		buff_cou++;
		number = -number;
	}
	tmp = number;
	/* caso especial number = INT_MIN */
	if (number == INT_MIN)
	{
		tmp++;
	}
	/* convertir tens en el 10^n maximo divisible entre number*/
	while (tmp > 9)
	{
		tens = tens * 10;
		tmp = tmp / 10;
	}

	tmp = number;
	while (tens > 0)
	{
		new_pointer[buff_cou] = ('0' + tmp / tens);
		buff_cou++;
		tmp %= tens;
		tens /= 10;
	}
	return (buff_cou);
}
/**
 * subc2 - substitute %c by the list element
 * @new_pointer: string to change
 * @list: va_list char to change
 * @buff_cou: index of dst where the c of %c is
 * Return: New index
 */
int subc2(char *new_pointer, va_list list, int buff_cou)
{
	int z_c;

	z_c = va_arg(list, int);
	new_pointer[buff_cou] = z_c;
	buff_cou++;
	return (buff_cou);
}
/**
 * subs2 - prints a character.
 * @new_pointer: Is a character string,
 * it is composed of zero or more directives.
 * @list: string list of arguments.
 * @buff_cou: index of dst where the c of %c is
 * Description: _subs writes a character.
 * Return: The number of characters printed, avoiding the end null byte.
 */
int subs2(char *new_pointer, va_list list, int buff_cou)
{
	char *value;
	int i;

	value = va_arg(list, char *);
	if (value == NULL)
		value = "(null)";
	for (i = 0; value[i]; i++, buff_cou++)
		new_pointer[buff_cou] = value[i];
	return (buff_cou);
}
