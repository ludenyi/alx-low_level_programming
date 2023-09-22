#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @h: pointer
 *
 * Return: h
 */
char *string_toupper(char *h)
{
	int i;

	i = 0;
	while (h[i] != '\0')
	{
		if (h[i] >= 'a' && h[i] <= 'z')
			h[i] = h[i] - 32;
		i++;
	}
	return (h);
}
