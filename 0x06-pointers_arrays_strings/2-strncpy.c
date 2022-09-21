#include "main.h"
/**
 *_strncpy - function copies a string
 *Works identically to the standard library function 'strncpy'
 *@dest: storing the string copy
 *@src: source string
 *@n: max number of byte copied
 *Return: returns string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
