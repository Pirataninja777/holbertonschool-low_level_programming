#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to a newly allocated space in memory containing the
 * concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = s1 ? 0 : -1, len2 = s2 ? 0 : -1, i = 0, g = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1 + 1])
		len1++;
	while (s2[len2 + 1])
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 2));
	if (concat == NULL)
		return (NULL);

	while (i <= len1)
	{
		concat[i] = s1[i];
		i++;
	}

	while (i <= len1 + len2 + 1)
	{
		concat[i] = s2[g];
		i++;
		g++;
	}

	concat[i] = '\0';

	return (concat);
}
