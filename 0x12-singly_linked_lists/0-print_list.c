#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the linked list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0, j;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		const char *str = h->str;
		unsigned int len = h->len;

		if (str == NULL)
		{
			_putchar('[');
			str = "(nil)";
			len = 0;
		}

		if (len > 0)
		{
			unsigned int temp = len;
			unsigned int divisor = 1;
			while (temp / 10 > 0)
			{
				divisor *= 10;
				temp /= 10;
			}

			_putchar('[');
			while (divisor > 0)
			{
				_putchar((len / divisor) + '0');
				len %= divisor;
				divisor /= 10;
			}
		}
		else
		{
			_putchar('0');
		}

		_putchar(']');
		_putchar(' ');

		for (j = 0; j < h->len; j++)
		{
			_putchar(str[j]);
		}

		_putchar('\n');

		i++;
		h = h->next;
	}

	return (i);
}

