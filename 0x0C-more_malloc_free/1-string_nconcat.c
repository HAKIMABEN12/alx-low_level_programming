#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatinate the whole of s1 and n bytes of s2
 * @s1: is the first string
 * @s2: is the second string
 * @n: is the number of bytes to copy
 * Return: a pointer to the duplicate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i;
	unsigned int j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	ptr = malloc(strlen(s1) + strnlen(s2, n) + 1);
		if (ptr == NULL)
		{
			return (0);
		}
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0' && j < n)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
