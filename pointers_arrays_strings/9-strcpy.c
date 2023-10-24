#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strcpy - check the code
 * Description: copy an array to another
 * @dest : pointer to destination array
 * @src : pointer to be copied
 * Return: char*
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0' && *(src + i) == NULL && *(dest + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
