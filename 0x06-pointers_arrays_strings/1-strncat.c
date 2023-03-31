#include "main.h"
/**
 * *_strncat - combines two strrings
 * @dest: is the destination
 * @src: is the source
 * Return: character
 * @n: is the bytes of src
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	int src_len = 0;

	while (src[src_len] != '\0' && src_len < n)
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}